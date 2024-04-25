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
        // ���������Ŀ������֮��ľ���
        float distance = Vector3.Distance(player.transform.position, transform.position);

        // �������뿪��ָ�����룬����Canvas
        if (distance > disableDistance)
        {
            associatedCanvas.enabled = false;
        }
    }
}
