using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScarletDeath : MonoBehaviour,IDeath
{
    public ParticleSystem shatterParticles;

    public BoxingMenu boxingMenu;
    public void OnDeath()
    {
        StartCoroutine(DeathSequence());
    }

    IEnumerator DeathSequence()
    {
        shatterParticles.Play();  // Play the particle system
        yield return new WaitForSeconds(4);  // Wait for 4 seconds
        gameObject.SetActive(false);  // Hide the cylinder
        boxingMenu.showWinningMenu();
    }
}
