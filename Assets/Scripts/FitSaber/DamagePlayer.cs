using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class DamagePlayer : Obstacle
{

    // Update is called once per frame
    private void OnTriggerEnter(Collider collision)
    {
        FitSaberPlayer fitSaberPlayer = collision.GetComponent<FitSaberPlayer>();

        if (fitSaberPlayer)
        {
            Debug.Log("Player hit!!");
            FindObjectOfType<FitSaberGameManager>().onDamagePlayerHitPlayer?.Invoke(this);
        }

    }

}
