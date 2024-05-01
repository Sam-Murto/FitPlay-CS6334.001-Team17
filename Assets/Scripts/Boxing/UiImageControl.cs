using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiImageControl : MonoBehaviour
{
    public Canvas imageCanvas;


    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Submit"))
        {
            imageCanvas.enabled=false;
        }
    }
}
