using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Baton : MonoBehaviour
{
    Vector3 velocity;
    Vector3 lastPosition;

    // Start is called before the first frame update
    void Start()
    {
        lastPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 deltaP = transform.position - lastPosition;
        velocity = deltaP/Time.deltaTime;
        Debug.Log(velocity);

        lastPosition = transform.position;

    }
}
