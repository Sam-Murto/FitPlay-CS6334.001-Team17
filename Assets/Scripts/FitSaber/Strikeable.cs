using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

[RequireComponent (typeof (Collider))]
public class Strikeable : MonoBehaviour
{
    [SerializeField]
    [Range(0.0f, 1.0f)]
    float strikeErrorTolerance;


    public void GetStruck(Vector3 strikeDirection)
    {
        Vector3 correctStrikeDirection = -transform.up;

        float error = 1 - Vector3.Dot(strikeDirection, correctStrikeDirection);

        if (error <= strikeErrorTolerance)
        {
            Crumble();
        }
        else
        {
            //Debug.Log("Strike Error: " + error);
        }

    }

    void Crumble()
    {
        Destroy(gameObject);
    }
}
