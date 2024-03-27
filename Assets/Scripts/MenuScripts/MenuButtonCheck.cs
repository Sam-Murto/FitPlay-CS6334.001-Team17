using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class MenuButtonCheck : MonoBehaviour
{
    private InputDevice targetDevice;
    public GameObject pauseMenu;
    private bool previousMenuButtonValue = false;

    void Start()
    {
        List<InputDevice> devices = new List<InputDevice>();
        InputDeviceCharacteristics leftControllerCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
        InputDevices.GetDevicesWithCharacteristics(leftControllerCharacteristics, devices);
        targetDevice = devices[0];
    }


    void Update()
    {

        if (targetDevice.TryGetFeatureValue(CommonUsages.menuButton, out bool menuButtonValue) && menuButtonValue && previousMenuButtonValue != menuButtonValue)
        {
            pauseMenu.SetActive(!pauseMenu.activeSelf);
            GameState.TogglePause();
        }

        previousMenuButtonValue = menuButtonValue;
    }
}
