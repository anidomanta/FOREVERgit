using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class SwitchCollision2 : MonoBehaviour
{
    public static int switchNum = 0;
    private int[] arrow = { 0, 1, 2, 3, 4, 5};
    private int[] arrowBarrier = { 0, 1};

    [SerializeField] Light2D[] light2d;
    [SerializeField] GameObject[] barrier;
    [SerializeField] AudioSource on;
    // Start is called before the first frame update
    void Start()
    {
        switchNum = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (switchNum == 1)
        {
            foreach (int i in arrow)
            {
                light2d[i].GetComponent<Light2D>().enabled = true;
            }
        }
        if (switchNum == 2)
        {
            foreach (int i in arrowBarrier)
            {
                barrier[i].GetComponent<SpriteRenderer>().enabled = false;
                barrier[i].GetComponent<BoxCollider2D>().enabled = false;
            }
        }
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
        {
            GetComponent<Animator>().SetBool("ON", true);
            this.GetComponent<BoxCollider2D>().enabled = false;
            on.Play();
            switchNum++;
            if (switchNum >= 2)
            {
                GetComponent<BoxCollider2D>().enabled = false;
            }
        }
    }
}
