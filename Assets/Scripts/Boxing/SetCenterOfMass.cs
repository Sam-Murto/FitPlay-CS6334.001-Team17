using UnityEngine;

public class SetCenterOfMass : MonoBehaviour
{
    public Transform centerOfMassMarker; // 在Inspector中指定这个变量为您的重心标识对象

    void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null && centerOfMassMarker != null)
        {
            // 将重心设置为标识对象的局部位置
            rb.centerOfMass = rb.transform.InverseTransformPoint(centerOfMassMarker.position);
        }
    }
}
