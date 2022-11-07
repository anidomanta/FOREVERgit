using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class Stage2Anim : MonoBehaviour
{
    public float speed;
    private float elapsedTime = 0f;
    private float alfa = 0f;
    private float alfa1 = 0f;
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girl;

    [SerializeField] GameObject back;
    [SerializeField] Camera camera;

    [SerializeField] Light2D begin;
    [SerializeField] Light2D[] light2d;
    [SerializeField] AudioSource bgm;
    private bool audioOn = false;

    public static bool good = false;
    // Start is called before the first frame update
    void Start()
    {
        if (StoryManager.drink <= 8)
        {
            Fungus.Flowchart.BroadcastFungusMessage("GoodOn1");
            good = true;
        }
        else
        {
            Fungus.Flowchart.BroadcastFungusMessage("NormalOn1");
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= 1.0f)
        {
            boy.GetComponent<Animator>().SetBool("right", true);
            girl.GetComponent<Animator>().SetBool("right", true);

            boy.transform.Translate(Vector2.right * speed);
            girl.transform.Translate(Vector2.right * speed);

            if (alfa <= 0.1f)
            {
                alfa += Time.deltaTime / 1.5f;
                begin.color = new Color(alfa, alfa, alfa, 1f);
            }
            if (alfa1 <= 1.0f)
            {
                for (int i = 0; i <= 2; i++)
                {
                    alfa1 += Time.deltaTime / 1.5f;
                    light2d[i].color = new Color(1f, 1f, 1f, alfa1);
                }
            }
        }

        if (girl.transform.position.x >= -6.5)
        {
            camera.transform.Translate(Vector2.right * speed);
        }

        if (audioOn)
        {
            bgm.volume -= Time.deltaTime;
        }
    }

    public void Audio()
    {
        audioOn = true;
    }
}
