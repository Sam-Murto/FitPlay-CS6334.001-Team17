using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class MenuButtonCheck : MonoBehaviour
{
    private InputDevice targetDevice;
    public GameObject pauseMenu;

    void Start()
    {
        List<InputDevice> devices = new List<InputDevice>();
        InputDeviceCharacteristics leftControllerCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
        InputDevices.GetDevicesWithCharacteristics(leftControllerCharacteristics, devices);
        if(devices[0] != null)
        {
            targetDevice = devices[0];
        }
        
    }


    void Update()
    {
        if (targetDevice.TryGetFeatureValue(CommonUsages.menuButton, out bool menuButtonValue) && menuButtonValue)
        {
            pauseMenu.SetActive(!pauseMenu.activeSelf);
        }
    }
}
