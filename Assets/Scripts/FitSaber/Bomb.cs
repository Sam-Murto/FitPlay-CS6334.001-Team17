using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Bomb : Obstacle
{

    public void GetStruck()
    {
        // Explode
        FindObjectOfType<FitSaberGameManager>().onBombExplode?.Invoke(this);
    }


}
