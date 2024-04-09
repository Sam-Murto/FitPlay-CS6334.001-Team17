using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour
{
    public GameObject SpawnObstacle(FitSaberLevel level, FitSaberLevel.ObstacleSpawn spawn)
    {
        Vector3 spawnLocation = new Vector3(spawn.offset.x, spawn.offset.y, spawn.timeToReachPlayer * level.speed);
        Vector3 rotationAngle = new Vector3( 0.0f, 0.0f, spawn.rotation);
        GameObject obstacle = Instantiate(spawn.obstacleType.gameObject, spawnLocation, Quaternion.Euler(rotationAngle));
        //obstacle.name = spawn.obstacleType.name;
        obstacle.GetComponent<Obstacle>().speed = level.speed;
        return obstacle;
    }

}
