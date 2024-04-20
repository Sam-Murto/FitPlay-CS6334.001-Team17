using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ducking : MonoBehaviour
{
    public Transform player;
    public Transform target;
    public float duckingDistance=0;
    public void LeftDucking()
    {
        if (target != null && player!=null)
        {
            player.LookAt(target);
            Vector3 leftDirection = -player.right;
            player.position += leftDirection * duckingDistance;
            player.LookAt(target);
        }
    }
    public void RightDucking()
    {
        if (target != null && player != null)
        {
            player.LookAt(target);
            Vector3 rightDirection = player.right;
            player.position += rightDirection * duckingDistance;
            player.LookAt(target);
        }
    }
    public void Update()
    {
        // for debug
        if(Input.GetKeyDown(KeyCode.D))
        {
            LeftDucking();
        }
    }
}
