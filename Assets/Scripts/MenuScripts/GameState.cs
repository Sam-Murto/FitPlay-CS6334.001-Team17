using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState : MonoBehaviour
{
    public static bool isPaused = false;
    public static bool isLoading = false;


    public static void TogglePause()
    {
        isPaused = !isPaused;
    }

}
