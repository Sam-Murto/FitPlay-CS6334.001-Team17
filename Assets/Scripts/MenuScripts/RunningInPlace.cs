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
using UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives;
using Unity.XR.CoreUtils;

public class RunningInPlace : MonoBehaviour
{
    public Text myText;
    public Text secondText;

    public XRNode inputSource = XRNode.Head; // Use the head as the input source
    public float baseSpeed = 2.0f; // Base speed of movement

    public DynamicMoveProvider moveProvider;
    private float[] locomotions = new float[0];

    InputDevice headDevice;

    [SerializeField]
    float l;
    Vector3 dPrev;

    void OnEnable()
    {
        headDevice = InputDevices.GetDeviceAtXRNode(inputSource);
        dPrev = l * Vector3.forward;
    }
    void Update()
    {
        Vector3 currentAcceleration = Input.acceleration;
        float currentMagnitude = currentAcceleration.magnitude;





        if (headDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 deviceVelocity)
            && headDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out Quaternion deviceRotation)
            && headDevice.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 devicePosition)
        )
        {
            Vector3 velFromAngleChange = VelocityFromAngleChange(deviceRotation).Abs();

            deviceVelocity = deviceVelocity.Abs() - velFromAngleChange;

            AddValueToFront(Math.Abs(deviceVelocity.y));



            // Check threshold for device velocity
            if (Math.Abs(deviceVelocity.y) > .1
            )
            {
                moveProvider.moveSpeed = (1 + deviceVelocity.y) * baseSpeed;
                Vector3 forward = Camera.main.transform.forward;
                forward.y = 0;
                forward.Normalize();
                transform.psoition += forward * moveProvider.movespeed * Time.deltaTime;
            }
            elseb 
            {
                moveProvider.moveSpeed = 0;
            }

        }
        // This is what was causing our bug. The game was unable to retrieve the device velocity. I solved this by trying to retrieve the device again if the movement information could not be retrieved.
        else
        {
            Debug.Log("Could not retrieve device velocity and device angular velocity: Re-retrieving head device " + headDevice.name);
            headDevice = InputDevices.GetDeviceAtXRNode(inputSource);
        }
    
    }
    public void AddValueToFront(float newValue)
    {
        // If the array has 10 elements, prepare to add by shifting
        if (locomotions.Length == 10)
        {
            // Shift elements to the right, starting from the second to last element
            for (int i = locomotions.Length - 2; i >= 0; i--)
            {
                locomotions[i + 1] = locomotions[i];
            }
        }
        else
        {
            // If array length is less than 10, simply resize and prepare for addition
            System.Array.Resize(ref locomotions, locomotions.Length + 1);
        }

        // Insert the new value at the beginning
        locomotions[0] = newValue;
    }

    //Assumes rotation refers to an object on sphere surface
    private Vector3 DisplacementFromCenter(Quaternion rotation)
    {
        Vector3 rotationVector = rotation * Vector3.forward;
        Vector3 eulerRotation = rotation.eulerAngles;
        float inclination = Vector3.Angle(Vector3.up, rotationVector);
        float azimuth = eulerRotation.y - (int)(eulerRotation.y / (2 * Mathf.PI)) * 2 * Mathf.PI;


        myText.text = inclination.ToString();


        float x = l * Mathf.Sin(Mathf.Deg2Rad * inclination) * Mathf.Cos(azimuth);
        float y = l * Mathf.Cos(Mathf.Deg2Rad * inclination);
        float z = l * Mathf.Sin(Mathf.Deg2Rad * inclination) * Mathf.Sin(azimuth);


        return new Vector3(x, y, z);
    }

    private Vector3 VelocityFromAngleChange(Quaternion rotation)
    {
        Vector3 dCurrent = DisplacementFromCenter(rotation);
        Vector3 deltaD = dCurrent - dPrev;
        Vector3 velocity = deltaD * Time.deltaTime;
        dPrev = dCurrent;

        return velocity;
    }
    

}
