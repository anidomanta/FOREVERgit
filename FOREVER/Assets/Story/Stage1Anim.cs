using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class Stage1Anim : MonoBehaviour
{
    public float speed;
    private float elapsedTime = 0f;
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girl;

    [SerializeField] GameObject back;
    [SerializeField] Camera camera;

    [SerializeField] Light2D begin;
    private float alfa = 0f;
    [SerializeField] AudioSource bgm;
    private bool audioOn = false;
    // Start is called before the first frame update
    void Start()
    {
        if (StoryManager.drink <= 6)
        {
            Fungus.Flowchart.BroadcastFungusMessage("GoodOn");
        }
        else
        {
            Fungus.Flowchart.BroadcastFungusMessage("NormalOn");
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= 3.0f)
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
