using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GoSequence : MonoBehaviour
{

    public TextMeshProUGUI goSequenceText;
    public void beginGoSequence()
    {
        StartCoroutine(PerformActionsWithDelays());
    }

    private IEnumerator PerformActionsWithDelays()
    {
        // set active 3
        goSequenceText.gameObject.SetActive(true);
        yield return new WaitForSecondsRealtime(1);
        //2
        goSequenceText.text = "2";
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
