using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class FitSaberUIManager : MonoBehaviour
{
    [SerializeField]
    FitSaberGameManager gameManager;

    [SerializeField]
    TextMeshProUGUI scoreText;

    private void Update()
    {
        scoreText.SetText("Score: " + gameManager.score);
    }

}
