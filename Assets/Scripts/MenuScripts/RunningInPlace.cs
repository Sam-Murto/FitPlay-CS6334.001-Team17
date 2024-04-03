using UnityEngine;
using UnityEngine.UI; 
using UnityEngine.XR;
using UnityEngine.XR.Interaction;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets;
using System.Linq;

public class RunningInPlace : MonoBehaviour
{
    public Text myText;
    public Text secondText;

     public XRNode inputSource = XRNode.Head; // Use the head as the input source
    public float baseSpeed = 1.0f; // Base speed of movement

    private CharacterController characterController;
    private InputDevice device;

    public GameObject locomotion;
    private float[] locomotions = new float[0];


    //private GameObject dynamicMoveProvider;
    
    //public Text deviceAccelerationText;
   // public Text deviceAngularAccelerationText

    void Start()
    {
        characterController = GetComponent<CharacterController>();
        device = InputDevices.GetDeviceAtXRNode(inputSource);
        if (characterController == null)
        {
            Debug.LogError("CharacterController is not attached to the GameObject.");
        }
    }
    void Update()
    {
       // Type type = locomotion.GetType();
       // Debug.Log(type);
       //DynamicMoveProvider dynamicMoveProvider = locomotion.GetComponent<DynamicMoveProvider>();
        Vector3 currentAcceleration = Input.acceleration;
        float currentMagnitude = currentAcceleration.magnitude; 
        InputDevice headDevice = InputDevices.GetDeviceAtXRNode(XRNode.Head);

         if (headDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 deviceVelocity)
         && headDevice.TryGetFeatureValue(CommonUsages.deviceAngularVelocity, out Vector3 deviceAngularVelocity)

         )
            {
               // myText.text = $"{deviceVelocity.y}";
               // secondText.text = $"{deviceAngularVelocity.y}";


            }
        
           if (device.TryGetFeatureValue(CommonUsages.deviceVelocity, out deviceVelocity)
           && headDevice.TryGetFeatureValue(CommonUsages.deviceAngularVelocity, out Vector3 devicesAngularVelocity))
        {
            AddValueToFront(Math.Abs(deviceVelocity.y));

            if(Math.Abs(deviceVelocity.y) > .1 && 
            Math.Abs(devicesAngularVelocity.y)< .5 &&  
            Math.Abs(devicesAngularVelocity.x)< .5 && 
            Math.Abs(devicesAngularVelocity.z) < .5)
            {
               locomotion.GetComponent<DynamicMoveProvider>().moveSpeed = 5;
            }
            else
            {
                locomotion.GetComponent<DynamicMoveProvider>().moveSpeed = 0;
            }
            
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
