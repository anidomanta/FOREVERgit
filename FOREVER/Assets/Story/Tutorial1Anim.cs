using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Tutorial1Anim : MonoBehaviour
{
    [SerializeField] GameObject girlCaptured;
    [SerializeField] GameObject girlFalling;
    [SerializeField] GameObject girl;

    [SerializeField] GameObject shadow;

    [SerializeField] Image black;

    private float elapsedTime = 0f;
    private float elapsedTime1 = 0f;
    private float elapsedTime2 = 0f;

    private bool time = false;
    private bool stop = false;
    private bool walk = false;

    [SerializeField] AudioSource hyun;
    [SerializeField] AudioSource bgm;
    private bool bgmlim = false;
    private bool hyunLim = true;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        elapsedTime += Time.deltaTime;

        if (elapsedTime >= 1.0f)
        {
            girlCaptured.GetComponent<SpriteRenderer>().enabled = false;
            girlFalling.GetComponent<SpriteRenderer>().enabled = true;
            girlFalling.AddComponent<Rigidbody2D>();
            if (!hyun.isPlaying && hyunLim)
            {
                hyun.Play();
                hyunLim = false;
            }
        }

        if (time)
        {
            elapsedTime1 += Time.deltaTime;
        }

        if (elapsedTime1 >= 1.0f)
        {
            if (!stop)
            {
                shadow.transform.Translate(-0.01f, 0f, 0f);
                shadow.GetComponent<Animator>().SetBool("left", true);
            }
        }

        if (shadow.transform.position.x <= 1.58f)
        {
            stop = true;
            shadow.GetComponent<Animator>().SetBool("left", false);
            elapsedTime2 += Time.deltaTime;
            if (elapsedTime2 >= 1.0f)
            {
                girlFalling.SendMessage("GirlGetUp");
            } 
        }

        if (elapsedTime2 >= 2.0f)
        {
            Fungus.Flowchart.BroadcastFungusMessage("DialogOn");
            if (!bgm.isPlaying)
            {
                bgm.Play();
            }
        }

        if (walk)
        {
            shadow.transform.Translate(0.01f, 0f, 0f);
            girl.transform.Translate(0.01f, 0f, 0f);
        }
        if (bgmlim)
        {
            bgm.volume -= Time.deltaTime;
        }
    }

    public void CollisionCheck()
    {
        time = true;
    }

    public void DialogOff()
    {
        black.enabled = true;
        walk = true;
        shadow.GetComponent<Animator>().SetBool("right", true);
        girl.GetComponent<Animator>().SetBool("right", true);
        bgmlim = true;
    }

    public void SceneChange()
    {
        SceneManager.LoadScene("Story");
    }

}
