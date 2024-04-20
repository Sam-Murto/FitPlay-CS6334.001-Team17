using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Unity.XR.CoreUtils;
using UnityEngine.Assertions;
using UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement;


public class AutoMoveProvider : ContinuousMoveProvider
{
    public float constantSpeed = 5.0f;
    public bool enableAutoMove = true;
    public GameObject rig;
    private CharacterController characterController;

    [SerializeField]
    Transform leftHand;
    [SerializeField]
    Transform rightHand;
    [SerializeField]
    Transform head;

    void Start()
    {
        characterController = rig.GetComponent<CharacterController>();
    }
    void Update()
    {
        base.Update();
        if(enableAutoMove)
        {
            Vector3 headDir = head.forward;
            Vector3 leftHandDir = (leftHand.position - head.position).normalized;
            Vector3 rightHandDir = (rightHand.position - head.position).normalized;

            Vector3 forwardDirection = head.forward;

            characterController.Move(forwardDirection * moveSpeed * Time.deltaTime);
           // Vector3 forwardMovmeent = Vector3.forward * constantSpeed * Time.deltaTime;
            //forwardDirection.Normalize();
            //system.xrOrigin.transform.position += forwardMovmeent;
        }
    }
   
}
