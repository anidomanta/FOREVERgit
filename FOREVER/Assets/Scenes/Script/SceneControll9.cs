using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Rendering.Universal;
using DG.Tweening;
using TMPro;

public class SceneControll9 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girl;
    [SerializeField] float startPosX;
    [SerializeField] float startPosY;
    [SerializeField] float goalPosX;
    private bool keep = false;

    private bool boyKeep = false;
    private bool girlKeep = false;

    [SerializeField] Image textBar;

    [SerializeField] TextMeshProUGUI[] drinkNum;
    [SerializeField] Image drinkPanel;
    private int remain9;
    public static int save9;

    [SerializeField] Light2D[] begin;
    [SerializeField] Light2D[] end;
    private float alfa = 0f;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
        if (Stage3Anim.good)
        {
            LifeLimit.lifeLimit = 1;
        }
        else
        {
            LifeLimit.lifeLimit = 2;
        }
        StoryManager.drink = SceneControll8.save8;
    }

    // Update is called once per frame
    void Update()
    {
        save9 = StoryManager.drink;
        if (alfa <= 1.0f && !keep)
        {
            alfa += Time.deltaTime / 1.5f;
            for (int i = 0; i <= 2; i++)
            {
                begin[i].color = new Color(1f, 1f, 1f, alfa);
            }
        }
        if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
        {
            if (alfa > 0f)
            {
                alfa -= Time.deltaTime / 1.5f;
                for (int i = 0; i <= 8; i++)
                {
                    end[i].color = new Color(1f, 1f, 1f, alfa);
                }
                GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume -= Time.deltaTime;
            }
            else
            {
                SceneManager.LoadScene("Story 3");
                Destroy(GameObject.Find("LoopBGM"));
            }
        }

        else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
        {
            var sequence = DOTween.Sequence();
            sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
            sequence.AppendInterval(5f);
            sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
            sequence.Play();
        }

        if (boyKeep && girlKeep)
        {
            GetComponent<Animator>().SetBool("keep", true);
            keep = true;
        }
        else
        {
            GetComponent<Animator>().SetBool("keep", false);
            keep = false;
        }

        if (LifeLimit.replay)
        {
            drinkPanel.enabled = true;
            for (int r = 0; r <= 3; r++)
            {
                drinkNum[r].enabled = true;
            }
            remain9 = 10 - StoryManager.drink;
            drinkNum[1].text = remain9.ToString();
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "Boy")
        {
            boyKeep = true;
        }

        if (collision.gameObject.name == "Girl")
        {
            girlKeep = true;
        }
    }
    void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.name == "Boy")
        {
            boyKeep = false;
        }

        if (collision.gameObject.name == "Girl")
        {
            girlKeep = false;
        }
    }
}
