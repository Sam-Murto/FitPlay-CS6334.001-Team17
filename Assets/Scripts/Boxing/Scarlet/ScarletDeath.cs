using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScarletDeath : MonoBehaviour,IDeath
{
    public ParticleSystem shatterParticles;

    public BoxingMenu boxingMenu;
    public AudioClip impactSound;
    private AudioSource audioSource;
    private void Start()
    {
        // 获取当前游戏对象上的AudioSource组件
        audioSource = GetComponent<AudioSource>();
    }

    public void OnDeath()
    {
        StartCoroutine(DeathSequence());
    }

    IEnumerator DeathSequence()
    {
        shatterParticles.Play();  // Play the particle system
        if (impactSound != null && audioSource != null)
        {
            audioSource.PlayOneShot(impactSound);
        }
        yield return new WaitForSeconds(4);  // Wait for 4 seconds
        gameObject.SetActive(false);  // Hide the cylinder
        Time.timeScale = 0;
        boxingMenu.showWinningMenu();
    }
}
