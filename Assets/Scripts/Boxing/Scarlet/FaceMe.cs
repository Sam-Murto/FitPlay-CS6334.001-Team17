using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceMe : MonoBehaviour
{
    public Transform player;
    public Transform boss;
    public float rotationSpeed = 1.0f;

    void Update()
    {
        // 计算从Boss到玩家的方向向量
        Vector3 direction =  boss.position-player.position;
        direction.y = 0; // 将Y分量设为0，保证旋转只在XZ平面内

        // 创建面向该方向的旋转
        Quaternion lookRotation = Quaternion.LookRotation(direction);

        // 应用旋转到Boss的Transform上
        boss.rotation = Quaternion.Slerp(boss.rotation, lookRotation, Time.deltaTime * rotationSpeed);
    }
}
