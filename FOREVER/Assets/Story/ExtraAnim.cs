using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ExtraAnim : MonoBehaviour
{
    private float elapsed = 0f;
    private float alfa = 0f;
    [SerializeField] GameObject white;
    [SerializeField] Image drink;
    [SerializeField] AudioSource on;
    private bool bgm = true;
    private bool wh = true;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        elapsed += Time.deltaTime;
        
        if (elapsed >= 2.0f)
        {
            if (wh)
            {
                alfa += Time.deltaTime * 2;
                white.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, alfa);
            }
            drink.enabled = false;
            if (!on.isPlaying && bgm)
            {
                bgm = false;
                on.Play();
            }
        }

        if (elapsed >= 5.0f)
        {
            Fungus.Flowchart.BroadcastFungusMessage("DialogOn2");
        }

        if (elapsed >= 7.0f)
        {
            wh = false;
        }
    }
}
