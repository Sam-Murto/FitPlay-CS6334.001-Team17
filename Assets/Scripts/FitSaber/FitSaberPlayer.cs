using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FitSaberPlayer : MonoBehaviour
{
    public int score { get; private set; }

    [SerializeField]
    int scoreLossOnMiss;

    private void OnEnable()
    {
    }

    private void OnDisable()
    {

    }


    // Update is called once per frame
    void Update()
    {
        
    }

    private void Miss()
    {
        score -= scoreLossOnMiss;
    }

}
