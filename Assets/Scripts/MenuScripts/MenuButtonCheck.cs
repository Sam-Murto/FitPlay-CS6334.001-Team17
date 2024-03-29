using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class MenuButtonCheck : MonoBehaviour
{
    private InputDevice targetDevice;
    public GameObject pauseMenu;
    
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

        if(targetDevice != null)
        {
        if (targetDevice.TryGetFeatureValue(CommonUsages.menuButton, out bool menuButtonValue) && menuButtonValue)
        {
            
            if(isActive==false)
            {
                pauseMenu.SetActive(!pauseMenu.activeSelf);
                isActive=true;
            }
            

        }
        else{
            isActive = false;
        }
    }
}
