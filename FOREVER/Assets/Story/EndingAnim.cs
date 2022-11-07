using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndingAnim : MonoBehaviour
{
    [SerializeField] Text text;
    private bool fade = false;
    // Start is called before the first frame update
    void Start()
    {
        if (StoryManager.drink <= 10)
        {
            Fungus.Flowchart.BroadcastFungusMessage("GoodEnd");
        }
        else
        {
            Fungus.Flowchart.BroadcastFungusMessage("NormalEnd");
        }
    }

    // Update is called once per frame
    void Update()
    {
        text.text = StoryManager.drink.ToString();
        if (fade)
        {
            GameObject.Find("Forever And Ever").GetComponent<AudioSource>().volume -= Time.deltaTime;
        }
    }

    public void AudioFade()
    {
        fade = true;
    }
}
