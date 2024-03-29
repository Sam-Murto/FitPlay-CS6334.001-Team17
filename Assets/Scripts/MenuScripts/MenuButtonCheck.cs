using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class MenuButtonCheck : MonoBehaviour
{
    private InputDevice targetDevice;
    public GameObject pauseMenu;
    private bool previousMenuButtonValue = false;

    private bool isActive = false;

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

        Debug.Log(targetDevice);
        if(targetDevice != null)
        {
        if (targetDevice.TryGetFeatureValue(CommonUsages.menuButton, out bool menuButtonValue) && menuButtonValue && previousMenuButtonValue != menuButtonValue)
        {
            
            pauseMenu.SetActive(!pauseMenu.activeSelf);
            GameState.TogglePause();
        }

        previousMenuButtonValue = menuButtonValue;
    }
}
