using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.XR;

public class HeadsetMovementDetector : MonoBehaviour
{
    void Update()
    {
        List<InputDevice> devices = new List<InputDevice>();
        float DefinedThreshold = 1f;
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeadMounted, devices);

        foreach (var device in devices)
        {
            if (device.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 velocity))
            {
                if (Mathf.Abs(velocity.x) > DefinedThreshold) 
                {
                    UnityEngine.Debug.Log("快速横向移动检测");
                }
            }
        }
    }
}
