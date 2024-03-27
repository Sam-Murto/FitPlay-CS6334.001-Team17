using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAlongTrack : MonoBehaviour
{
    float speed = 8.0f;

    void Update()
    {
        transform.Translate(Vector3.back * speed * Time.deltaTime);  
    }
}
