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

            // ������Ŀ����ͬһˮƽ���ϵĵ�
            Vector3 targetPosition = new Vector3(target.position.x, player.position.y, target.position.z);

            // �״�LookAt�������������ƶ�ǰӰ�췽�����
            player.LookAt(targetPosition);

            // ��������ķ���
            Vector3 leftDirection = -player.right;
            player.position += leftDirection * duckingDistance;

            // �ٴ�LookAt��ȷ��������ȷ
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
