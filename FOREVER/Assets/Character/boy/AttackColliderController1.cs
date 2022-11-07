using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackColliderController1 : MonoBehaviour
{
    [SerializeField] GameObject hissatsuColliderR;
    [SerializeField] GameObject hissatsuColliderL;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void Update()
    {

    }

    // Update is called once per frame

    public void ColliderOn1()
    {
        if (BoyWalkAnim.direction)
        {
            //攻撃の当たり判定を付ける
            hissatsuColliderR.GetComponent<BoxCollider2D>().enabled = true;
        }
        else
        {
            hissatsuColliderL.GetComponent<BoxCollider2D>().enabled = true;
        }
    }
}
