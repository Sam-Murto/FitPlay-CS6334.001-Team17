using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FitSaberSound : MonoBehaviour
{
    [SerializeField]
    AudioSource strikeSound;
    [SerializeField]
    AudioSource explosionSound;
    [SerializeField]
    AudioSource playerDamagedSound;

    public void PlayStrikeSound()
    {
        strikeSound.Play();
    }

    public void PlayeExplosionSound()
    {
        explosionSound.Play();
    }

    public void PlayPlayerDamagedSound()
    {
        playerDamagedSound.Play();
    }

}
