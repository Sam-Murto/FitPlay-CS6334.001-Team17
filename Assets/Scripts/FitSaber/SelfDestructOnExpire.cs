using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelfDestructOnExpire : MonoBehaviour
{
    ParticleSystem particleSystem;

    private void OnEnable()
    {
        particleSystem = GetComponent<ParticleSystem>();
    }

    private void Update()
    {
        if (particleSystem.isStopped)
            Destroy(gameObject);
    }

}
