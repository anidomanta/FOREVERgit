using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartButton : MonoBehaviour
{
    [SerializeField] Image BlackOut;
    private float alfa = 0f;

    [SerializeField] AudioSource noise;
    // Start is called before the first frame update
    void Start()
    {
        BlackOut.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (BlackOut.enabled)
        {
            alfa += Time.deltaTime / 2;
            BlackOut.color = new Color(0f, 0f, 0f, alfa);
            noise.volume -= Time.deltaTime / 2;
            if (alfa >= 1.0f)
            {
                SceneManager.LoadScene("Tutorial");
            }
        }
    }

    public void OnClick()
    {
        BlackOut.enabled = true;
    }
}
