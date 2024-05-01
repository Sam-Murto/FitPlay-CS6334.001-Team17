using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackScore : MonoBehaviour
{

    private FitSaberGameManager gameManager;
    public int score { get; private set; }


    // Start is called before the first frame update
    void OnEnable()
    {
        gameManager = FindObjectOfType<FitSaberGameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        score = gameManager.score;
    }
}
