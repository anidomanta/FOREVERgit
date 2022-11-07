using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class SwitchCollision1 : MonoBehaviour
{
    private int switchNum = 0;
    private int[] arrow = { 0};

    [SerializeField] Light2D[] light2d;
    [SerializeField] AudioSource on;
    // Start is called before the first frame update
    void Start()
    {
        
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
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
        {
            GetComponent<Animator>().SetBool("ON", true);
            on.Play();
            switchNum++;
            GetComponent<BoxCollider2D>().enabled = false;
        }
    }
}
