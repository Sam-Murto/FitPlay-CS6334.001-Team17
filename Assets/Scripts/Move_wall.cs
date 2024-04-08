using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;

public class Move_wall : MonoBehaviour
{
    public GameObject[] defined_points;
    int current_state = 0;
    public float speed;
    float point_radius = 1;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(UnityEngine.Vector3.Distance(defined_points[current_state].transform.position, 
        transform.position) < point_radius)
        {
            current_state++;
            if(current_state >= defined_points.Length)
            {
                current_state = 0;
            }

        }

        transform.position = UnityEngine.Vector3.MoveTowards(transform.position, 
        defined_points[current_state].transform.position, Time.deltaTime * speed);
    }
}
