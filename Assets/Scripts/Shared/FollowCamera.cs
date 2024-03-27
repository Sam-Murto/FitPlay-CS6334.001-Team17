using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour
{
    public Transform cameraTransform; 
    public Vector3 offset = new Vector3(0, 0, -10); 
    void Update()
    {
        if (cameraTransform != null)
        {  
            transform.position = cameraTransform.position + cameraTransform.rotation * offset;
        }
    }
}