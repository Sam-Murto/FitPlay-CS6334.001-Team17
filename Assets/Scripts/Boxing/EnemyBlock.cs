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

    public void Block ()
    {
        if(current_state == false)
        {
            transform.position = Vector3.MoveTowards(transform.position, 
        Block_point.transform.position, Time.deltaTime * MoveSpeed);

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

    public bool MovementState()
    {
        return current_state;
    }

    public int RandomState()
    {
        return random_state;
    }
}
