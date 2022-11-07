using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering.Universal;

public class Stage4Anim : MonoBehaviour
{
    public float speed;
    private float speed1;
    private float speedKeep;
    private float elapsedTime = 0f;
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girl;

    private bool stop = false;
    private bool stop1 = false;

    private bool stop2 = false;
    private bool stop3 = false;

    private bool ending = false;
    private float elapsed = 0f;
    private int anim = 0;

    [SerializeField] AudioSource forever;
    private bool audioCont = false;

    [SerializeField] Light2D whole;
    [SerializeField] Light2D light2d;
    [SerializeField] GameObject door;
    private float alfa = 0f;
    private float alfa1 = 0f;

    // Start is called before the first frame update
    void Start()
    {
        speed1 = speed;
        speedKeep = speed;
        Stage3Anim.good = false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= 1.0f)
        {
            if (!stop)
            {
                boy.GetComponent<Animator>().SetBool("right", true);
            }
            if (!stop1)
            {
                girl.GetComponent<Animator>().SetBool("right", true);
            }
            boy.transform.Translate(Vector2.right * speed / 2.0f);
            girl.transform.Translate(Vector2.right * speed1);

            if (alfa <= 0.32f)
            {
                alfa += Time.deltaTime / 1.5f;
                whole.color = new Color(alfa, alfa, alfa, 1f);
            }
            if (alfa1 <= 1.0f)
            {
                alfa1 += Time.deltaTime / 1.5f;
                light2d.color = new Color(1f, 1f, 1f, alfa1);
                door.GetComponent<SpriteRenderer>().color = new Color(alfa1, alfa1, alfa1, 1f);
            }
        }

        if (elapsedTime >= 2.0f && !stop2)
        {
            if (StoryManager.drink <= 10)
            {
                Fungus.Flowchart.BroadcastFungusMessage("GoodOn2");
            }
            else
            {
                Fungus.Flowchart.BroadcastFungusMessage("NormalOn2");
            }
            speed1 = speed * 1.5f;
            girl.GetComponent<Animator>().SetBool("running", true);
            stop1 = true;
        }
        if (girl.transform.position.x >= 1.0f)
        {
            speed1 = 0f;
            girl.GetComponent<Animator>().SetBool("right", false);
            stop2 = true;
        }
        if (boy.transform.position.x >= -1.0f && !ending)
        {
            stop = true;
            boy.GetComponent<Animator>().SetBool("right", false);
            speed = 0f;
        }

        if (ending)
        {
            elapsed += Time.deltaTime;
        }
        if (elapsed >= 1.0f && anim == 0)
        {
            speed = -speedKeep / 3.0f;
            boy.GetComponent<Animator>().SetBool("left", true);
            anim++;
        }
        if (elapsed >= 3.0f && anim == 1)
        {
            boy.GetComponent<Animator>().SetBool("left", false);
            speed = 0f;
            anim++;
        }
        if (elapsed >= 5.0f && anim == 2)
        {
            boy.GetComponent<Animator>().SetBool("left", true);
            speed = -speedKeep / 3.0f;
            anim++;
        }
        if (elapsed >= 7.0f && anim == 3)
        {
            speed = -speedKeep;
        }

        if (audioCont)
        {
            forever.volume -= Time.deltaTime;
        }
    }

    public void LeftGirl()
    {
        girl.GetComponent<Animator>().SetBool("idleL", true);
    }

    public void Ending()
    {
        boy.GetComponent<Animator>().SetBool("idleL", true);
        ending = true;
    }

    public void AudioStop()
    {
        audioCont = true;
    }
}
