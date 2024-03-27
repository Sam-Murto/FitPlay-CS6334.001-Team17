using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour
{
    [SerializeField]
    GameObject[] obstacleTypes;

    [SerializeField]
    float spawnInterval;
    float timeToNextSpawn;

    [SerializeField]
    Transform spawnTransform;

    // Start is called before the first frame update
    void OnEnable()
    {
        timeToNextSpawn = spawnInterval;
    }

    // Update is called once per frame
    void Update()
    {
        timeToNextSpawn -= Time.deltaTime;

        if(timeToNextSpawn < 0)
        {
            Instantiate(RandomObstacle(), spawnTransform.position, Quaternion.identity);
            timeToNextSpawn = spawnInterval;
        }


    }

    GameObject RandomObstacle()
    {
        int min = 0;
        int max = obstacleTypes.Length - 1;
        float t = Random.value;
        int randomIndex = (int)((max - 0.5f) * t + 0.5f);

        return obstacleTypes[randomIndex];
    }
}
