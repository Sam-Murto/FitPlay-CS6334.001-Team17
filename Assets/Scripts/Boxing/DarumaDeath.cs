using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DarumaDeath : MonoBehaviour,IDeath
{
    public GameObject self;
    public void OnDeath()
    {
        self.GetComponent<Rigidbody>().useGravity = false;
        StartCoroutine(DestroyAfterDelay());
    }
    private IEnumerator DestroyAfterDelay()
    {
        // �ȴ�����
        yield return new WaitForSeconds(10);

        Destroy(self);
    }
}