using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EnemyLeftPunch : MonoBehaviour
{
    bool current_state = false;
    public GameObject Player;
    public Transform origin_point;
    public float MoveSpeed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
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
    }

    private void OnCollisionEnter(Collision other)
    {
        if(other.gameObject.CompareTag("Body"))
        {
            Debug.Log("Player was attacked!!!");
            current_state = true;
        }
    }
}
