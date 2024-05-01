using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EnemyLeftPunch_low : MonoBehaviour
{
    bool current_state = false;
    public GameObject Player;
    public Transform origin_point;
    public float MoveSpeed;
    public PlayerHealth playerHealth;
    int random_state;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Left_punch();
    }

    public void Left_punch ()
    {
        if(current_state == false)
        {
            transform.position = Vector3.MoveTowards(transform.position, 
        Player.transform.position, Time.deltaTime * MoveSpeed);

        }

        if(current_state == true)
        {
            transform.position = Vector3.MoveTowards(transform.position, 
        origin_point.position, Time.deltaTime * MoveSpeed);
        
        }

        if(current_state == true && transform.position == origin_point.position)
        {
            current_state = false;
            this.enabled = false;
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if(other.gameObject.CompareTag("Body"))
        {
            Debug.Log("Player was attacked!!!");
            playerHealth.RemoveHealth(10);
            current_state = true;
        }

        if(other.gameObject.CompareTag("Fist"))
        {
            Debug.Log("No damage");
            current_state = true;
        }
    }

    public bool MovementState()
    {
        return current_state;
    }

    public int RandomState()
    {
        return random_state;
    }
}
