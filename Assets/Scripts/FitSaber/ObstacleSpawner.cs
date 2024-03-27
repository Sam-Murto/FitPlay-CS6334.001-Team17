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
        if (GameState.isPaused) return;

        timeToNextSpawn -= Time.deltaTime;

        if(timeToNextSpawn < 0)
        {
            Instantiate(RandomObstacle(), spawnTransform.position, Quaternion.identity);
            timeToNextSpawn = spawnInterval;
        }


    }

    GameObject RandomObstacle()
    {
        int max = obstacleTypes.Length - 1;
        float t = Random.value;
        int randomIndex = (int)((max) * t + 0.5f);

        return obstacleTypes[randomIndex];
    }
}
