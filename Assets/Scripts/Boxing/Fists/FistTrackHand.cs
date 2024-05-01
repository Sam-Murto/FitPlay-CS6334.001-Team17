using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class FistTrackHand : MonoBehaviour
{
    public SkinnedMeshRenderer skinnedMeshRenderer;
    public GameObject fist;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (skinnedMeshRenderer != null)
        {
            // 获取中心的局部坐标
            Vector3 centerWorld = skinnedMeshRenderer.bounds.center;


            // 输出或使用这个世界坐标
            UnityEngine.Debug.Log("Center World Position: " + centerWorld);

            fist.transform.position = centerWorld;
        }
    }
}
