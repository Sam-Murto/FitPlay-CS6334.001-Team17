using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleTimeScale : MonoBehaviour
{
    void Awake()
    {
        Time.timeScale = 0f;
    }
    public void Toggle()
    {
        Time.timeScale = Time.timeScale == 0 ? 1 : 0;
    }
}
