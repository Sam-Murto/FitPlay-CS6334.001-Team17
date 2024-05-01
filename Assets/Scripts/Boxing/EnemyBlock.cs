using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EnemyBlock : MonoBehaviour
{
    bool current_state = false;
    public GameObject Enemy;
    public GameObject Block_point;
    public GameObject originalLeftPosition;
    public GameObject originalRightPosition;
    public float MoveSpeed;
    public int maxPositions;
    public GameObject leftHand;
    public GameObject rightHand;
    public LinkedList<Vector3> leftHandPositions = new LinkedList<Vector3>();
    public LinkedList<Vector3> rightHandPositions = new LinkedList<Vector3>();
    public float maxYTransform;
    private Vector3 firstQueueItemLeft;

    public GameObject leftHandPositionBlock;
    public GameObject rightHandPositionBlock;
    int random_state;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Block();
    }

    public void Block()
    {
        Debug.Log("inside Block");
        if (current_state == false)
        {
            leftHand.transform.position = Vector3.MoveTowards(leftHand.transform.position,
            leftHandPositionBlock.transform.position, Time.deltaTime * MoveSpeed);
            rightHand.transform.position = Vector3.MoveTowards(rightHand.transform.position,
           rightHandPositionBlock.transform.position, Time.deltaTime * MoveSpeed);
            //current_state = true;
        }

        StartCoroutine(BlockDelay());

        if (current_state == true)
        {
            //transform.position = Vector3.MoveTowards(transform.position,
            //origin_point.position, Time.deltaTime * MoveSpeed);


        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("Fist"))
        {
            //Debug.Log("No damage");
            current_state = true;
            random_state = Random.Range(1, 2);
        }
    }

    private IEnumerator BlockDelay()
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

        foreach (Vector3 instance in theQueue)
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

    private void updatePositionQueues()
    {
        Debug.Log("Inside Quee");
        if(leftHandPositions.Count >= maxPositions)
        {
            Debug.Log("inside here DEQUE");
            leftHandPositions.RemoveFirst();
        }
        if (rightHandPositions.Count >= maxPositions)
        {
            rightHandPositions.RemoveFirst();
        }
        
    leftHandPositions.AddLast(leftHand.transform.position);
    
    rightHandPositions.AddLast(leftHand.transform.position);
        Debug.Log("final updatePositions Que");
    }

    public bool MovementState()
    {
        return current_state;
    }

    public int RandomState()
    {
        return random_state;
    }
}
