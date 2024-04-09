using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MenuButtonCheck : MonoBehaviour
{
    public GameObject pauseMenu;
    public GameObject timerObject;
    public GameObject finishLine;

    [SerializeField]
    InputActionReference menuReference;

    void OnEnable()
    {
        menuReference.action.started += Toggle;
        Time.timeScale = 1f;
    }

    private void OnDisable()
    {
        menuReference.action.started -= Toggle;
    }

    private void Update()
    {
        GameState.isPaused = pauseMenu.activeSelf;
    }

    public void TogglePause()
    {
        pauseMenu.SetActive(!pauseMenu.activeSelf);
        GameState.isPaused = pauseMenu.activeSelf;
    }

    void Toggle(InputAction.CallbackContext context)
    {
        Debug.Log("Toggling Pause");
        pauseMenu.SetActive(!pauseMenu.activeSelf);
        GameState.isPaused = pauseMenu.activeSelf;
        Time.timeScale = (GameState.isPaused) ? 0f : 1f;
        }
}

