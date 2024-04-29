using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy_hand_controller : MonoBehaviour
{
    public GameObject Enemy_left_hand;
    bool movement_state;
    int current_state;
    public Transform left_origin, left_hand_pos;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var left_hand = Enemy_left_hand.GetComponent<EnemyLeftPunch_low>();
        movement_state = left_hand.MovementState();
        current_state = left_hand.RandomState();
        Debug.Log("This state: " + movement_state);
        Debug.Log("Random state: " + current_state);

        if(movement_state == true && left_origin.position == left_hand_pos.position)
        {
            Debug.Log("Arrived");
        }
    }
}
