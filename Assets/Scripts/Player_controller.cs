using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player_controller : MonoBehaviour
{

    public GameObject finish_stage;
    int score;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.y <= -5.0f)
        {
            SceneManager.LoadScene(0);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Coin")
        {
            score++;
            other.gameObject.SetActive(false);
        }

        if(other.tag == "Finish_line")
        {
            Debug.Log("Finish Line");
            finish_stage.SetActive(true);
        }
    }

    public int current_score()
    {
        return score;
    }
}
