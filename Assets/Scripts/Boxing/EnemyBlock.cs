using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EnemyBlock : MonoBehaviour
{
    bool current_state = false;
    public GameObject Block_point;
    public Transform origin_point;
    public float MoveSpeed;
    public int maxPositions;
    public GameObject leftHand;
    public GameObject rightHand;
    public Queue<Vector3> leftHandPositions = new Queue<Vector3>();
    public Queue<Vector3> rightHandPositions = new Queue<Vector3>();
    public float maxYTransform;
    int random_state;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        //updatePositionQueues();
        //update if trajecotry would hit opponent
        //Should be in idle state
        if (leftHandPositions.Count >= 2 && rightHandPositions.Count >= 2)
        {
            Vector3 averageDirectionLeft = calculateAverageDirection(leftHandPositions);
            RaycastHit leftHit;

            Vector3 averageDirectionRight = calculateAverageDirection(rightHandPositions);
            RaycastHit rightHit;

            if (Physics.Raycast(leftHand.transform.position, averageDirectionLeft, out leftHit, 10f))
            {
                Block(leftHit.point);
            }
            else if (Physics.Raycast(rightHand.transform.position, averageDirectionRight, out rightHit, 10f))
            {
                Block(rightHit.point);
            }


        }
        
    }

    public void Block ( Vector3 hitPoint)
    {
        if(current_state == false)
        {
            transform.position = Vector3.MoveTowards(transform.position,
            hitPoint, Time.deltaTime * MoveSpeed);

        }

        StartCoroutine (BlockDelay());

        if(current_state == true)
        {
            transform.position = Vector3.MoveTowards(transform.position, 
        origin_point.position, Time.deltaTime * MoveSpeed);
        
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if(other.gameObject.CompareTag("Fist"))
        {
            Debug.Log("No damage");
            current_state = true;
            random_state = Random.Range(1,2);
        }
    }

    private IEnumerator BlockDelay ()
    {
        yield return new WaitForSeconds(1);
        current_state = true;
    }

    private Vector3 getUserTrajectory()
    {
        //
        //Get user trajectory
        Vector3 trajectory = new Vector3();
        return trajectory;
    }
    private Vector3 calculateAverageDirection(Queue<Vector3> theQueue)
    {
        Vector3 sumDirection = Vector3.zero;
        Vector3 previousInstance = theQueue.Peek();

        foreach(Vector3 instance in theQueue)
        {
            Vector3 direction = instance - previousInstance;
            sumDirection += direction.normalized;
            previousInstance = instance;

           
        }
        if (theQueue.Count > 1)
        {
            Vector3 averageDirection = sumDirection / (theQueue.Count - 1);

            return averageDirection.normalized;
        }

        return Vector3.forward;
    }
    private bool playerWillHitOpponent()
    {
        bool willHitOpponent = false;
        //Get user trajectory point

        //Raycast towards trajecotry point

        //If hit opponent change willhitOppnen to true

        return willHitOpponent;
    }
    
    ////private void updatePositionQueues()
    //{
    //    if(leftHandPositions.Count >= maxPositions)
    //    {
    //        leftHandPositions.Dequeue();
    //    }
    //    if (rightHandPositions.Count >= maxPositions)
    //    {
    //        rightHandPositions.Dequeue();
    //    }
    //    leftHandPositions.Enqueue(leftHand.transform.position);
    //    rightHandPositions.Enqueue(leftHand.transform.position);
    //}
    
    public bool MovementState()
    {
        return current_state;
    }

    public int RandomState()
    {
        return random_state;
    }
}
