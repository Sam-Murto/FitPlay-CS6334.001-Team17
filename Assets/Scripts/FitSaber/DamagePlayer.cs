using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class DamagePlayer : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    private void OnCollisionEnter(Collision collision)
    {
        FitSaberPlayer fitSaberPlayer = collision.collider.GetComponent<FitSaberPlayer>();

        if (fitSaberPlayer)
        {
            Debug.Log("Player hit");
            FitSaberPlayer.onPlayerDamaged?.Invoke();
        }

    }

}
