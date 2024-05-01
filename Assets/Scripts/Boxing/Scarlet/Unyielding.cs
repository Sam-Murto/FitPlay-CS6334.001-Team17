using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unyielding : MonoBehaviour
{
    public Transform centerOfMassMarker;
    private Vector3 originCenter;
    // Start is called before the first frame update
    void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            originCenter = rb.centerOfMass;

        }

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
