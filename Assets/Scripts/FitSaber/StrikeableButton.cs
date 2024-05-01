using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]
public class StrikeableButton : MonoBehaviour
{
    [SerializeField]
    [Range(0.0f, 1.0f)]
    float strikeErrorTolerance;

    [SerializeField]
    UnityEvent buttonStruck;

    public void GetStruck(Vector3 strikeDirection)
    {
        Vector3 correctStrikeDirection = -transform.up;

        float error = 1 - Vector3.Dot(strikeDirection, correctStrikeDirection);

        if (error <= strikeErrorTolerance)
        {
            OnStruck();
        }
        else
        {
            //Debug.Log("Strike Error: " + error);
        }

    }

    void OnStruck()
    {
        buttonStruck?.Invoke();
    }
}
