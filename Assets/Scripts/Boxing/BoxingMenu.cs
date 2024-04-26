using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class BoxingMenu : MonoBehaviour
{

    //public GameObject MenuSettings = GameObject.Find("BoxingFinishMenu");
    public GameObject MenuSettings;
    void Start()
    {
        MenuSettings = GameObject.Find("BoxingFinishMenu");
        Debug.Log("inside here");
    }
    void Update()
    {
        if(MenuSettings != null)
        {
            showGameOver();
        }

    }
    public void showGameOver()
    {
        MenuSettings.transform.Find("Menutext").GetComponent<Text>().text = "Game Over";
        MenuSettings.SetActive(true);
    }

    public void showWinningMenu()
    {
       // MenuSettings.MenuText.Text = "You Win!";
        MenuSettings.SetActive(true);
    }
}
