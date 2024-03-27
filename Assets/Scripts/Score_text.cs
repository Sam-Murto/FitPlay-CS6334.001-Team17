using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Score_text : MonoBehaviour
{

    public TextMeshProUGUI score_text;
    public GameObject player;
    int current_score;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        current_score = player.GetComponent<Player_controller>().current_score();
        score_text.text = "Score: " + current_score.ToString();
        
    }
}
