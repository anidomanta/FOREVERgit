using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GirlCapturedAnim : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] GameObject girlSleeping;
    [SerializeField] GameObject girl;
    [SerializeField] GameObject shadow;
    [SerializeField] GameObject story;

    [SerializeField] AudioSource hyun;
    [SerializeField] AudioSource dosa;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.name == "Tile")
        {
            GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0f);
            girlSleeping.GetComponent<SpriteRenderer>().enabled = true;
            boy.GetComponent<SpriteRenderer>().enabled = false;
            shadow.GetComponent<SpriteRenderer>().enabled = true; // left direction
            story.SendMessage("CollisionCheck"); // Tutorial1Anim

            hyun.Stop();
            dosa.Play();
        }
    }

    public void GirlGetUp()
    {
        girlSleeping.GetComponent<SpriteRenderer>().enabled = false;
        girl.GetComponent<SpriteRenderer>().enabled = true;
    }


}
