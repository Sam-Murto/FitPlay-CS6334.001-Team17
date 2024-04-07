using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FitSaberSound : MonoBehaviour
{
    [SerializeField]
    AudioSource strikeSound;


    public void PlayStrikeSound()
    {
        strikeSound.Play();
    }

}
