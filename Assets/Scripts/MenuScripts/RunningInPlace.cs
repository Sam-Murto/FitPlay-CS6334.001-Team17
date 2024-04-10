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

public class RunningInPlace : MonoBehaviour
{
    //public Text myText;
    //public Text secondText;

    public XRNode inputSource = XRNode.Head; // Use the head as the input source
    public float baseSpeed = 5.0f; // Base speed of movement

    public DynamicMoveProvider moveProvider;
    private float[] locomotions = new float[0];

    InputDevice headDevice;

    //private GameObject dynamicMoveProvider;
    
    //public Text deviceAccelerationText;
    //public Text deviceAngularAccelerationText

    void OnEnable()
    {
        headDevice = InputDevices.GetDeviceAtXRNode(inputSource);
    }
    void Update()
    {
        Vector3 currentAcceleration = Input.acceleration;
        float currentMagnitude = currentAcceleration.magnitude;

        if (headDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 deviceVelocity)
            && headDevice.TryGetFeatureValue(CommonUsages.deviceAngularVelocity, out Vector3 deviceAngularVelocity)
        )
        {
            AddValueToFront(Math.Abs(deviceVelocity.y));

            // Check threshold for device velocity
            if (Math.Abs(deviceVelocity.y) > .1
                && Math.Abs(deviceAngularVelocity.y) < .5
                && Math.Abs(deviceAngularVelocity.x) < .5
                && Math.Abs(deviceAngularVelocity.z) < .5
            )
            {
                moveProvider.moveSpeed = baseSpeed;
            }
            else
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
}
