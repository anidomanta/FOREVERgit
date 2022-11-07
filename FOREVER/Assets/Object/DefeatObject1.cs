using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefeatObject1 : MonoBehaviour
{
    [SerializeField] AudioSource defeat;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "AttackCollider1" || collider.gameObject.name == "HissatsuCollider1")
        {
            GetComponent<BoxCollider2D>().enabled = false;
            GetComponent<Animator>().SetBool("defeat1", true);
            defeat.Play();
        }
    }
}
