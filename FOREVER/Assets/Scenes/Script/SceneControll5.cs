using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
using TMPro;

public class SceneControll5 : MonoBehaviour
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
    private int remain5;
    public static int save5;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
        LifeLimit.lifeLimit = 0;
        StoryManager.drink = SceneControll4.save4;
    }

    // Update is called once per frame
    void Update()
    {
        save5 = StoryManager.drink;
        if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
        {
            SceneManager.LoadScene("Stage 2");
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
            remain5 = 10 - StoryManager.drink;
            drinkNum[1].text = remain5.ToString();
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
