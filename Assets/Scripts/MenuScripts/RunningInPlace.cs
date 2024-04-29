using UnityEngine;
using UnityEngine.UI; 
using UnityEngine.XR;
using UnityEngine.XR.Interaction;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets;
using System.Linq;
using Unity.XR.CoreUtils;
using UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement;

public class RunningInPlace : MonoBehaviour
{
    public Text myText;
    //public Text secondText;

    public XRNode inputSource = XRNode.Head; // Use the head as the input source
    public float baseSpeed = 2.0f; // Base speed of movement

    public FitRunningMoveProvider moveProvider;
    private List<float> velocities;

    InputDevice headDevice;

    [SerializeField]
    float runningThreshold = 0.6f;
    [SerializeField]
    float l;

    [SerializeField]
    int framesAveragedForSpeed = 10;

    [SerializeField]
    float accelerationCoefficient = 2;
    Vector3 dPrev;

    float currentSpeed;
    float targetSpeed;
    float currentAcceleration;

    void OnEnable()
    {
        headDevice = InputDevices.GetDeviceAtXRNode(inputSource);
        dPrev = l * Vector3.forward;
        velocities = new List<float>();
    }
    void Update()
    {
        if (headDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 deviceVelocity)
            && headDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out Quaternion deviceRotation)
        )
        {
            Vector3 velFromAngleChange = VelocityFromAngleChange(deviceRotation).Abs();

            deviceVelocity = deviceVelocity.Abs() - velFromAngleChange;

            AddValueToFront(deviceVelocity.y);

            float averageVelocity = GetAverageVelocity();

            if(myText != null)
            {
                myText.text = "" + averageVelocity;
            }
           


            targetSpeed = baseSpeed * (1 + averageVelocity);
            currentAcceleration = (averageVelocity - runningThreshold) * accelerationCoefficient;
            currentSpeed += currentAcceleration;
            currentSpeed = Mathf.Clamp(currentSpeed, 0f, targetSpeed);

            moveProvider.moveSpeed = currentSpeed;


        }
        // This is what was causing our bug. The game was unable to retrieve the device velocity. I solved this by trying to retrieve the device again if the movement information could not be retrieved.
        else
        {
            Debug.Log("Could not retrieve head device info: Re-retrieving head device " + headDevice.name);
            headDevice = InputDevices.GetDeviceAtXRNode(inputSource);
        }
    
    }
    public void AddValueToFront(float newValue)
    {
        velocities.Insert(0, newValue);
        if(velocities.Count > framesAveragedForSpeed)
        {
            velocities.RemoveAt(framesAveragedForSpeed);
        }
    }

    private float GetAverageVelocity() => velocities.Sum() / velocities.Count();

    //Assumes rotation refers to an object on sphere surface
    private Vector3 DisplacementFromCenter(Quaternion rotation)
    {
        Vector3 rotationVector = rotation * Vector3.forward;
        Vector3 eulerRotation = rotation.eulerAngles;
        float inclination = Vector3.Angle(Vector3.up, rotationVector);
        float azimuth = eulerRotation.y - (int)(eulerRotation.y / (2 * Mathf.PI)) * 2 * Mathf.PI;

        float x = l * Mathf.Sin(Mathf.Deg2Rad * inclination) * Mathf.Cos(azimuth);
        float y = l * Mathf.Cos(Mathf.Deg2Rad * inclination);
        float z = l * Mathf.Sin(Mathf.Deg2Rad * inclination) * Mathf.Sin(azimuth);

        return new Vector3(x, y, z);
    }

    private Vector3 VelocityFromAngleChange(Quaternion rotation)
    {
        Vector3 dCurrent = DisplacementFromCenter(rotation);
        Vector3 deltaD = dCurrent - dPrev;
        Vector3 velocity = deltaD / Time.unscaledDeltaTime;
        dPrev = dCurrent;

        return velocity;
    }
    

}
