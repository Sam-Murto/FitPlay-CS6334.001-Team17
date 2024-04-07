using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent (typeof (Collider))]
public class Strikeable : Obstacle
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
        FindObjectOfType<FitSaberGameManager>().onObstacleStruck?.Invoke(this);
    }
}
