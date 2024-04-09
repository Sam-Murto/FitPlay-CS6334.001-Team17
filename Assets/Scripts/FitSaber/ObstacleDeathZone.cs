using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class ObstacleDeathZone : MonoBehaviour
{

    FitSaberGameManager gameManager;
    private void OnEnable()
    {
        gameManager = FindObjectOfType<FitSaberGameManager>();
    }


    private void OnCollisionEnter(Collision collision)
    {
        DamagePlayer obstacle = collision.collider.GetComponentInParent<DamagePlayer>();

        if (obstacle)
            gameManager.onDamagePlayerReachDeathZone?.Invoke(obstacle);

    }

    private void OnTriggerEnter(Collider collider)
    {
        Strikeable obstacle = collider.GetComponent<Strikeable>();

        if (obstacle)
        {
            gameManager.onStrikableReachDeathZone?.Invoke(obstacle);
        }
        
        Bomb bomb = collider.GetComponent<Bomb>();

        if (bomb)
        {
            gameManager.onBombReachDeathZone?.Invoke(bomb);
        }


    }
}
