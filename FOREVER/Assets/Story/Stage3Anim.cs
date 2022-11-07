using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering.Universal;

public class Stage3Anim : MonoBehaviour
{
    public float speed;
    private float speed1;
    private float speedKeep;
    private float elapsedTime = 0f;
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girl;
    [SerializeField] GameObject shadow;

    private bool stop = false;
    private bool stop1 = false;

    private bool stop2 = false;
    private bool stop3 = false;

    [SerializeField] Light2D[] pointbrinklight;
    [SerializeField] Image alarm;
    private float alfa = 0f;
    private bool alfaPlus = true;
    private bool alartOn = false;

    private bool walk = false;

    [SerializeField] Light2D begin;
    [SerializeField] Light2D[] light2d;
    private float alfa1 = 0f;
    private float alfa2 = 0f;

    public static bool good = false;
    [SerializeField] AudioSource warning;
    // Start is called before the first frame update
    void Start()
    {
        speed1 = speed;
        speedKeep = speed;
        Stage2Anim.good = false;
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
            boy.transform.Translate(Vector2.right * speed);
            girl.transform.Translate(Vector2.right * speed1);

            if (alfa1 <= 0.1f)
            {
                alfa1 += Time.deltaTime / 1.5f;
                begin.color = new Color(alfa1, alfa1, alfa1, 1f);
            }
            if (alfa2 <= 1.0f)
            {
                for (int i = 0; i <= 2; i++)
                {
                    alfa2 += Time.deltaTime / 1.5f;
                    light2d[i].color = new Color(1f, 1f, 1f, alfa2);
                }
            }
        }

        if ((boy.transform.position.x >= 0.5f || elapsedTime >= 5.0f) && !walk)
        {
            stop = true;
            speed = 0f;
            boy.GetComponent<Animator>().SetBool("right", false);
        }
        if ((girl.transform.position.x >= -1.5f || elapsedTime >= 5.5f) && !stop2)
        {
            stop1 = true;
            speed1 = 0f;
            girl.GetComponent<Animator>().SetBool("right", false);
        }

        if (elapsedTime >= 8.5f && !walk)
        {
            boy.GetComponent<SpriteRenderer>().enabled = false;
            shadow.GetComponent<SpriteRenderer>().enabled = true;
        }

        if (elapsedTime >= 9.5f && !stop3)
        {
            stop2 = true;
            speed1 = speedKeep * 1.5f;
            girl.GetComponent<Animator>().SetBool("running", true);
        }
        if (girl.transform.position.x >= 1.5f && !walk)
        {
            stop3 = true;
            girl.GetComponent<Animator>().SetBool("idleL", true);
            speed1 = 0f;
        }
        if (elapsedTime >= 11.0f)
        {
            if (StoryManager.drink <= 10)
            {
                Fungus.Flowchart.BroadcastFungusMessage("GoodOn2");
                good = true;
            }
            else
            {
                Fungus.Flowchart.BroadcastFungusMessage("NormalOn2");
            }
        }

        if (alartOn)
        {
            pointbrinklight[0].color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
            pointbrinklight[1].color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
            alarm.color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
            if (alfa <= 0f)
            {
                alfaPlus = true;
            }
            if (alfa >= 1.0f)
            {
                alfaPlus = false;
            }
            if (alfaPlus)
            {
                alfa += Time.deltaTime;
            }
            if (!alfaPlus)
            {
                alfa -= Time.deltaTime;
            }
        }

        if (walk)
        {
            shadow.GetComponent<SpriteRenderer>().enabled = false;
            boy.GetComponent<SpriteRenderer>().enabled = true;
            boy.GetComponent<Animator>().SetBool("down", true);
            girl.GetComponent<Animator>().SetBool("right", true);
            speed = speedKeep / 2.0f;
            speed1 = speedKeep / 2.0f;
        }
    }
    public void Alarm()
    {
        alartOn = true;
        warning.Play();
    }

    public void Walk()
    {
        walk = true;
    }
}
