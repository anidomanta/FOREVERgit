using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjCollision : MonoBehaviour
{
    [SerializeField] GameObject story;
    [SerializeField] GameObject boy;

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
            GetComponent<Animator>().SetBool("defeat", true);
            GetComponent<BoxCollider2D>().enabled = false;
            boy.GetComponent<Animator>().enabled = false;
            boy.GetComponent<BoyWalkAnim>().enabled = false;

            story.GetComponent<Reload>().enabled = false;
            story.GetComponent<Tutorial1Anim>().enabled = true;
            GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume = 0f;
            Destroy(GameObject.Find("LoopBGM"));
        }
    }
}
