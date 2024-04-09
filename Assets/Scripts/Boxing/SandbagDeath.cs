using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SandbagDeath : MonoBehaviour, IDeath
{
    public GameObject rope;
    public GameObject self;
    public void OnDeath()
    {
        foreach (Transform child in rope.transform)
        {
            Rigidbody rb = child.GetComponent<Rigidbody>();
            if (rb != null)
            {
                // 设置useGravity为false，使其不受重力影响
                rb.useGravity = false;
            }
            HingeJoint hj = child.GetComponent<HingeJoint>();
            if (hj != null)
            {
                hj.breakForce = 0;
            }
        }
        // 禁用自身的重力
        self.GetComponent<Rigidbody>().useGravity = false;
        // 禁用自身的hingeJoint
        self.GetComponent<HingeJoint>().breakForce = 0;
        StartCoroutine(DestroyAfterDelay());
    }
    
    private IEnumerator DestroyAfterDelay()
    {
        // 等待五秒
        yield return new WaitForSeconds(10);

        // 销毁rope和self
        Destroy(rope);
        Destroy(self);
    }
}
