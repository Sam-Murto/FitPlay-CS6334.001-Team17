using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class BoxingMenu : MonoBehaviour
{

    public GameObject MenuSettings;
    public Text menuText;

    public void Update()
    {

    }
    public void showGameOver()
    {
        menuText.text = "Game Over";
        menuText.color = Color.red;
        MenuSettings.SetActive(true);
    }

    public void showWinningMenu()
    {
        menuText.text = "You Win!";
        menuText.color = Color.green;
        MenuSettings.SetActive(true);
    }
}
