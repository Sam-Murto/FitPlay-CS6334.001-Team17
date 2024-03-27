using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAlongTrack : MonoBehaviour
{
    float speed = 8.0f;
    float trackLength = 30.0f;
    float distanceTraveled = 0.0f;
    void Update()
    {
        float moveAmount = speed * Time.deltaTime;
        transform.Translate(Vector3.back * moveAmount);
        distanceTraveled += moveAmount;
        if (distanceTraveled > trackLength)
            Destroy(gameObject);
    }
}
