using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FitSaberPlayer : MonoBehaviour
{
    public int score { get; private set; }

    [SerializeField]
    int scoreLossOnMiss;

    [SerializeField]
    public UnityEvent onPlayerHit;
    private UnityAction playerHit;

    private void OnEnable()
    {
        playerHit += Miss;
        onPlayerHit.AddListener(playerHit);
    }

    private void OnDisable()
    {
        playerHit -= Miss;
        onPlayerHit.RemoveListener(playerHit);
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
