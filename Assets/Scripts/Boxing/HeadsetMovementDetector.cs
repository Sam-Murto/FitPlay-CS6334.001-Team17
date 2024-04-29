using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.XR;

public class HeadsetMovementDetector : MonoBehaviour
{
    public Ducking ducking;
    public float DefinedThreshold = 0.8f;
    void Update()
    {
        List<InputDevice> devices = new List<InputDevice>();
        
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeadMounted, devices);

        foreach (var device in devices)
        {
            if (device.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 velocity))
            {
                if (Mathf.Abs(velocity.x) > DefinedThreshold) 
                {
                    if (velocity.x > 0) 
                    {
                        UnityEngine.Debug.Log("快速向右移动检测");
                        ducking.RightDucking();
                    }
                    else if (velocity.x < 0) 
                    {
                        UnityEngine.Debug.Log("快速向左移动检测");
                        ducking.LeftDucking();
                    }
                }
            }
        }
    }
}
