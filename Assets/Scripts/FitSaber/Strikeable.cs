using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

[RequireComponent (typeof (Collider))]
public class Strikeable : MonoBehaviour
{
    [SerializeField]
    Vector3 correctStrikeDirection;

    public void GetStruck(Vector3 strikeDirection)
    {


        if (strikeDirection == correctStrikeDirection)
        {
            Crumble();
        }
        else
        {
            Debug.Log("Struck in direction: " + strikeDirection + ", correct direction: " + correctStrikeDirection);
        }

    }

    void Crumble()
    {
        Destroy(gameObject);
    }
}
