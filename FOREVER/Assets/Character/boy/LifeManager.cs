using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LifeManager : MonoBehaviour
{
    [SerializeField] Image[] life;
    [SerializeField] Image[] drink;
    [SerializeField] Image bokashi;
    [SerializeField] Image black;
    private int energy = -1; // ‚½‚ß‚Ä‚¢‚élife”Ô†
    public static int charging = 0; // ‚½‚ß‚Ä‚¢‚é—Í

    private float elapsed = 0f;
    private float alfa = 0f;

    private int gameover = 5;
    private bool on = true;

    [SerializeField] AudioSource se;
    [SerializeField] AudioSource over;

    // Start is called before the first frame update
    void Start()
    {
        charging = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (charging >= 2)
        {
            GetComponent<AttackColliderController1>().enabled = true;
        }

        switch (LifeLimit.lifeLimit)
        {
            case 0:
                gameover = 5;
                break;

            case 1:
                gameover = 3;
                life[0].enabled = false;
                life[1].enabled = false;
                break;

            case 2:
                gameover = 1;
                life[0].enabled = false;
                life[1].enabled = false;
                life[2].enabled = false;
                life[3].enabled = false;
                break;

            case 3:
                gameover = 99;
                break;

            default:
                gameover = 5;
                break;
        }

        if (energy >= gameover)
        {
            // gameover
            GetComponent<BoyWalkAnim>().enabled = false;
            GetComponent<Rigidbody2D>().velocity = new Vector2(0, 0);
            bokashi.enabled = true;
            if (!over.isPlaying && on)
            {
                over.Play();
                on = false;
            }
            elapsed += Time.deltaTime;
            if (elapsed >= 0.2f)
            {
                alfa += Time.deltaTime;
                black.enabled = true;
                black.color = new Color(0, 0, 0, alfa);
                if (alfa >= 1.0f)
                {
                    // Œ»İ‚ÌScene‚ğæ“¾
                    Scene loadScene = SceneManager.GetActiveScene();
                    // Œ»İ‚ÌƒV[ƒ“‚ğÄ“Ç‚İ‚İ‚·‚é
                    SceneManager.LoadScene(loadScene.name);
                }
            }
        }
    }

    public void LifeUI()
    {
        if (LifeLimit.lifeLimit == 0)
        {
            for (int r = 0; r <= energy; r++)
            {
                life[r].GetComponent<Animator>().SetBool("release", true);
            }
        }
        else if (LifeLimit.lifeLimit == 1)
        {
            for (int r = 2; r <= energy + 2; r++)
            {
                life[r].GetComponent<Animator>().SetBool("release", true);
            }
        }
        else if (LifeLimit.lifeLimit == 2)
        {
            for (int r = 4; r <= energy + 4; r++)
            {
                life[r].GetComponent<Animator>().SetBool("release", true);
            }
        }
        else
        {
            drink[0].enabled = false;
            drink[1].enabled = false;
            drink[2].enabled = false;
            drink[3].enabled = false;
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "drink")
        {
            energy++;
            if (LifeLimit.lifeLimit == 0)
            {
                for (int r = 0; r <= energy; r++)
                {
                    life[r].GetComponent<Animator>().SetBool("charge", true);
                }
            }
            else if (LifeLimit.lifeLimit == 1)
            {
                for (int r = 2; r <= energy + 2; r++)
                {
                    life[r].GetComponent<Animator>().SetBool("charge", true);
                }
            }
            else if (LifeLimit.lifeLimit == 2)
            {
                for (int r = 4; r <= energy + 4; r++)
                {
                    life[r].GetComponent<Animator>().SetBool("charge", true);
                }
            }
            else
            {
                drink[energy].enabled = true;
            }
            Destroy(collision.gameObject);
            charging++;
            StoryManager.drink++;
            se.Play();
        }
    }
}
