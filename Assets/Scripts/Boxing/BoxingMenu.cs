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
        //Debug.Log("Test");
        //showGameOver();
    }
    public void showGameOver()
    {
        Debug.Log("test");
        
        MenuSettings.SetActive(true);
    }

    public void showWinningMenu()
    {
        GameObject MenuSettings = GameObject.Find("BoxingFinishMenu");
        MenuSettings.SetActive(true);
    }
}
