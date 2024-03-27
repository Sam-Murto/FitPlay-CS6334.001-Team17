using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Saber : MonoBehaviour
{
    [SerializeField]
    SaberEnd saberEnd;

    Rigidbody rigidBody;

    Vector3 velocity;
    Vector3 lastPosition;

    [SerializeField]
    float strikeSpeedThreshold;

    private void OnEnable()
    {
        rigidBody = GetComponent<Rigidbody>();
    }

    // Start is called before the first frame update
    void Start()
    {
        lastPosition = GetSaberEndPosition();
        velocity = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        UpdateVelocity();
    }

    Vector3 GetStrikeDirection() {
        Vector3 strikeDirection = Vector3.zero;
        strikeDirection.x = (Mathf.Abs(velocity.x) > strikeSpeedThreshold) ? Mathf.Sign(velocity.x) : 0;
        strikeDirection.y = (Mathf.Abs(velocity.y) > strikeSpeedThreshold) ? Mathf.Sign(velocity.y) : 0;

        return strikeDirection;
    }

    private void UpdateVelocity()
    {
        Vector3 deltaP = GetSaberEndPosition() - lastPosition;
        velocity = deltaP / Time.deltaTime;

        lastPosition = GetSaberEndPosition();
    }

    Vector3 GetSaberEndPosition()
    {
        return saberEnd.transform.position;
    }

    private void OnCollisionEnter(Collision collision)
    {
        Strikeable struckObject = collision.collider.GetComponent<Strikeable>();

        if(struckObject != null)
        {
            struckObject.GetStruck(GetStrikeDirection());
        }
    }

}