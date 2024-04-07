using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class nonTutorialGoSequence : MonoBehaviour
{

    private bool isStart = false;
     void Update()
    {
        if(!isStart)
        {
            Debug.Log("start");
            isStart = true;
            beginGoSequence();
        }
        
    }
    public TextMeshProUGUI goSequenceText;
    public void beginGoSequence()
    {
        StartCoroutine(PerformActionsWithDelays());
    }

    private IEnumerator PerformActionsWithDelays()
    {
        Debug.Log("inside");
        // set active 3
        goSequenceText.gameObject.SetActive(true);
        yield return new WaitForSecondsRealtime(1);
        //2
        goSequenceText.text = "2";
        Debug.Log("inside");
        yield return new WaitForSecondsRealtime(1);
        //1
        goSequenceText.text = "1";
        yield return new WaitForSecondsRealtime(1);
        // Change to Begin
        goSequenceText.text = "0";

        goSequenceText.gameObject.SetActive(false);
        Time.timeScale = 1f;
        // Set Active to false

    }
}
