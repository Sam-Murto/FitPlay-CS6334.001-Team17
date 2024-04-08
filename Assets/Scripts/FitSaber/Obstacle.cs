using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    public float speed = 8.0f;
    void Update()
    {
        if (GameState.isPaused || GameState.isLoading) return;

        float moveAmount = speed * Time.deltaTime;
        transform.Translate(Vector3.back * moveAmount);
    }
}
