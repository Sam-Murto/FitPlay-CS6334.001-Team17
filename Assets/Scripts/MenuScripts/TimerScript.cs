using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimerScript : MonoBehaviour
{

    public TextMeshProUGUI timerText;
    private bool timerIsActive = true;
    private float elapsedTime = 0f;

    void Update()
    {
        if (timerIsActive)
        {
            elapsedTime += Time.deltaTime;
            UpdateTimerDisplay();
        }
    }

    public void ToggleTimer()
    {
        timerIsActive = !timerIsActive;
    }
    private void UpdateTimerDisplay()
    {
        int minutes = Mathf.FloorToInt(elapsedTime / 60);
        int seconds = Mathf.FloorToInt(elapsedTime % 60);
        timerText.text = string.Format("Time: {0:00}:{1:00}", minutes, seconds);
    }
}
