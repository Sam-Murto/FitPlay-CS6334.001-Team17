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

    private void OnTriggerEnter(Collider collider)
    {
        Strikeable strikeable = collider.GetComponent<Strikeable>();

        if (strikeable)
        {
            gameManager.onStrikableReachDeathZone?.Invoke(strikeable);
        }
        
        Bomb bomb = collider.GetComponent<Bomb>();

        if (bomb)
        {
            gameManager.onBombReachDeathZone?.Invoke(bomb);
        }

        DamagePlayer damagePlayer = collider.GetComponentInParent<DamagePlayer>();

        if (damagePlayer)
            gameManager.onDamagePlayerReachDeathZone?.Invoke(damagePlayer);

    }
}
