using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaveHpBarDisappear : MonoBehaviour
{
    public GameObject player;
    public Canvas associatedCanvas;
    public float disableDistance = 5f;
    public Ducking ducking;

    // Start is called before the first frame update
    void Start()
    {
        if (associatedCanvas != null)
        {
            associatedCanvas.enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // 计算玩家与目标物体之间的距离
        float distance = Vector3.Distance(player.transform.position, transform.position);

        // 如果玩家离开了指定距离，禁用Canvas
        if (distance > disableDistance)
        {
            associatedCanvas.enabled = false;
        }
    }
}
