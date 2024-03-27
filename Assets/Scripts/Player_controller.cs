using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player_controller : MonoBehaviour
{

    public float speed_move;
    public GameObject finish_stage;

    float xInput;
    float yInput;

    Rigidbody rb;
    int score;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        xInput = Input.GetAxis("Horizontal");
        yInput = Input.GetAxis("Vertical");

        if(transform.position.y <= -5.0f)
        {
            SceneManager.LoadScene(0);
        }
    }

    private void FixedUpdate()
    {
        rb.AddForce(xInput * speed_move, 0, yInput * speed_move);
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

    public int cuurent_score()
    {
        return score;
    }
}
