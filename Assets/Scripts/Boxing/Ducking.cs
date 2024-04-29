using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ducking : MonoBehaviour
{
    public Transform player;
    public Transform target;
    public float duckingDistance=0;
    public PlayerHealth playerHealth;
    public void LeftDucking()
    {
        if (target != null && player != null)
        {
            playerHealth.Invincible(0.5f);

            // 计算与目标在同一水平面上的点
            Vector3 targetPosition = new Vector3(target.position.x, player.position.y, target.position.z);

            // 首次LookAt调整，避免在移动前影响方向计算
            player.LookAt(targetPosition);

            // 计算向左的方向
            Vector3 leftDirection = -player.right;
            player.position += leftDirection * duckingDistance;

            // 再次LookAt以确保朝向正确
            player.LookAt(targetPosition);
        }
    }

    public void RightDucking()
    {
        if (target != null && player != null)
        {
            playerHealth.Invincible(0.5f);
            Vector3 targetPosition = new Vector3(target.position.x, player.position.y, target.position.z);
            player.LookAt(targetPosition);
            Vector3 rightDirection = player.right;
            player.position += rightDirection * duckingDistance;
            player.LookAt(targetPosition);
        }
    }
    public void Update()
    {
        // for debug
        if (Input.GetKeyDown(KeyCode.D))
            {
                LeftDucking();
            }
    }
}
