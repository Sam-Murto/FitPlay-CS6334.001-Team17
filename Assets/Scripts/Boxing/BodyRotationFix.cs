using UnityEngine;

public class BodyRotationFix : MonoBehaviour
{
    private Quaternion initialRotation;

    void Start()
    {
        // 记录初始旋转
        initialRotation = transform.rotation;
    }

    void Update()
    {
        // 每帧更新时，重置旋转为初始旋转，忽略摄像机的旋转
        transform.rotation = initialRotation;
    }
}
