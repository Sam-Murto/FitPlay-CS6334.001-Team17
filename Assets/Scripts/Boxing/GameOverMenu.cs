using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxingMenu : MonoBehaviour
{

    public GameObject MenuSettings = GameObject.Find("BoxingFinishMenu");

    public void showGameOver()
    {
        MenuSettings.SetActive(true);
    }

    public void showWinningMenu()
    {
        MenuSettings.SetActive(true);
    }
}
