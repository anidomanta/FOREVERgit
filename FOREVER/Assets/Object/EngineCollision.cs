using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EngineCollision : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] GameObject story;
    [SerializeField] GameObject engine;
    [SerializeField] AudioSource on;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "AttackCollider" || collision.gameObject.name == "AttackCollider1")
        {
            GetComponent<Animator>().enabled = false;
            GetComponent<BoxCollider2D>().enabled = false;
            boy.GetComponent<Animator>().enabled = false;
            boy.GetComponent<BoyWalkAnim>().enabled = false;
            GetComponent<SpriteRenderer>().enabled = false;
            engine.GetComponent<SpriteRenderer>().enabled = true;
            on.Play();

            story.GetComponent<ExtraAnim>().enabled = true;
            story.GetComponent<Reload>().enabled = false;
            GameObject.Find("Forever And Ever").GetComponent<AudioSource>().volume = 0f;
            Destroy(GameObject.Find("Forever And Ever"));
            LifeLimit.replay = true;
        }
    }
}
