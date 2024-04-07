using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MenuButtonCheck : MonoBehaviour
{
    public GameObject pauseMenu;
    public GameObject timerObject;

    private bool isActive = false;

    bool deviceDetected = false;

    [SerializeField]
    InputActionReference menuReference = null;

    void OnEnable()
    {
        menuReference.action.started += Toggle;
    }

    private void OnDisable()
    {
        menuReference.action.started += Toggle;
    }

    void Toggle(InputAction.CallbackContext context)
    {
        Debug.Log("Toggling Pause");
        pauseMenu.SetActive(!pauseMenu.activeSelf);
        if(Time.timeScale == 0f)
        {
            Time.timeScale = 1f;
        }
        else
        {
            Time.timeScale = 0f;
        }
    }


}

