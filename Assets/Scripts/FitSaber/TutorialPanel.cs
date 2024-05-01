using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TutorialPanel : MonoBehaviour
{

    [SerializeField]
    List<GameObject> panels;

    GameObject activePanel;

    int step = 0;

    // Start is called before the first frame update
    void OnEnable()
    {
        step = 0;
        activePanel = panels[0];
        activePanel.SetActive(true);
    }

    public void NextStep()
    {
        activePanel.SetActive(false);
        step++;
        if(step > panels.Count - 1)
        {
            // Invoke tutorial finished event
            FindObjectOfType<FitSaberGameManager>().EndTutorial(this);
            return;
        }

        activePanel = panels[step];
        activePanel.SetActive(true);

    }

}
