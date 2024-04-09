using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player_controller : MonoBehaviour
{

    public GameObject finish_stage;
    public AudioClip sound_coin;
    int score;
    public GameObject finish_menu;
    public GameObject interactionManager;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.y <= -5.0f)
        {
            SceneManager.LoadScene(0);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Coin")
        {
            score++;
            AudioSource.PlayClipAtPoint(sound_coin, transform.position, 1.0f);
            other.gameObject.SetActive(false);
        }

        if(other.tag == "Finish_line")
        {
            Debug.Log("Finish Line");
            finish_stage.SetActive(true);
            finish_menu.SetActive(true);
            //Disable Menu Script
            MenuButtonCheck menu_ButtonCheck = interactionManager.GetComponent<MenuButtonCheck>();
            menu_ButtonCheck.enabled = false;
            Time.timeScale = 0f;
        }
    }

    public int current_score()
    {
        return score;
    }
}
