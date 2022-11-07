using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoyWalkAnim : MonoBehaviour
{
    public float speed;
    private float speedKeep = 0f;
    private Rigidbody2D rbody2D;
    public static bool direction = true; // trueの時右向き、falseの時左向き

    private float jumpForce = 350f;

    private bool grounded = true;
    private bool grounded1 = true;
    [SerializeField] LayerMask groundlayer;
    [SerializeField] LayerMask objectlayer;

    private int stand = 0; // animationの制御に必須。0=idleR, 1=right, 2=left, 3=idleL
    public static bool attack = false; // 攻撃モーションがちゃんと動いてくれるように願掛け（気になったら検証してくれ）

    [SerializeField] GameObject shadow;

    [SerializeField] AudioSource attackSE;
    [SerializeField] AudioSource hissatsuSE;

    // Use this for initialization
    void Start()
    {
        rbody2D = GetComponent<Rigidbody2D>();
        direction = true;
        if (GameObject.Find("Girl"))
        {
            GameObject.Find("Girl").GetComponent<SpriteRenderer>().color = new Color(0.2f, 0.2f, 0.2f, 1f);
        }
        attack = false;
        grounded = true;
        grounded1 = true;
        speedKeep = speed;
    }

    // Update is called once per frame
    void FixedUpdate() // verocityの計算用
    {
        // 接地判定用の線
        Vector3 left_SP = transform.position - Vector3.right * 0.3f;
        Vector3 right_SP = transform.position + Vector3.right * 0.3f;
        Vector3 EP = transform.position - Vector3.up * 0.1f;

        //verociryにすることで壁へのめり込みを防ぐ、接触したら止まるようにしている
        rbody2D.velocity = new Vector2(
            Input.GetAxisRaw("Horizontal") * speed * Time.deltaTime,
            rbody2D.velocity.y);
        if (!attack && speed == 0f)
        {
            speed = speedKeep;
        }

        // 交代したらスピード失くす
        if (GameObject.Find("Girl"))
        {
            GameObject.Find("Girl").GetComponent<Rigidbody2D>().velocity = new Vector2(0, GameObject.Find("Girl").GetComponent<Rigidbody2D>().velocity.y);
        }
    }

    void Update() // GetKey読み込む用
    {
        GetComponent<SpriteRenderer>().sortingOrder = 4;
        // 接地しているかどうか、接地しているとtrue、そうではないときはfalseを返す
        grounded = Physics2D.Linecast(transform.position - Vector3.right * 0.182f,
           transform.position - Vector3.right * 0.182f - transform.up / 20,
           groundlayer | objectlayer);
        grounded1 = Physics2D.Linecast(transform.position - Vector3.left * 0.252f,
           transform.position - Vector3.left * 0.252f - transform.up / 20,
           groundlayer | objectlayer);

        if ((Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)) && (grounded || grounded1))
        {
            this.rbody2D.AddForce(transform.up * jumpForce);
        }

        if (Input.GetKeyDown(KeyCode.Space) && LifeManager.charging >= 1) // 攻撃モーション。AttackColliderController、AttackEndに続く。
        {
            attack = true;
            if (LifeManager.charging == 1)
            {
                if (BoyWalkAnim.direction)
                {
                    GetComponent<Animator>().SetTrigger("attackR");
                    GetComponent<Animator>().SetBool("idleR", false);
                    GetComponent<Animator>().SetBool("right", false);
                    GetComponent<Animator>().SetBool("left", false);
                    GetComponent<Animator>().SetBool("idleL", false);
                }

                else
                {
                    GetComponent<Animator>().SetTrigger("attackL");
                    GetComponent<Animator>().SetBool("idleR", false);
                    GetComponent<Animator>().SetBool("right", false);
                    GetComponent<Animator>().SetBool("left", false);
                    GetComponent<Animator>().SetBool("idleL", false);
                }
                attackSE.Play();
            }
            if (LifeManager.charging >= 2)
            {
                if (BoyWalkAnim.direction)
                {
                    GetComponent<Animator>().SetTrigger("hissatsuR");
                    GetComponent<Animator>().SetBool("idleR", false);
                    GetComponent<Animator>().SetBool("right", false);
                    GetComponent<Animator>().SetBool("left", false);
                    GetComponent<Animator>().SetBool("idleL", false);
                }

                else
                {
                    GetComponent<Animator>().SetTrigger("hissatsuL");
                    GetComponent<Animator>().SetBool("idleR", false);
                    GetComponent<Animator>().SetBool("right", false);
                    GetComponent<Animator>().SetBool("left", false);
                    GetComponent<Animator>().SetBool("idleL", false);
                }
                hissatsuSE.Play();
            }
            SendMessage("LifeUI");
            LifeManager.charging = 0;
            // 攻撃のCollider操作はAttackColliderControllerにて操作、攻撃モーション中は他の操作を受け付けない
            if (grounded || grounded1)
            {
                speed = 0f;
            }
        }

        if (!attack)
        {
            if ((Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)))
            {
                GetComponent<Animator>().SetBool("right", true);
                GetComponent<Animator>().SetBool("idleR", false);
                GetComponent<Animator>().SetBool("idleL", false);
                GetComponent<Animator>().SetBool("left", false);
                direction = true;
                stand = 1;
            }

            if ((Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.D)) && stand == 1)
            {
                GetComponent<Animator>().SetBool("idleR", true);
                GetComponent<Animator>().SetBool("idleL", false);
                GetComponent<Animator>().SetBool("right", false);
                GetComponent<Animator>().SetBool("left", false);
                direction = true;
                stand = 0;
            }

            if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
            {
                GetComponent<Animator>().SetBool("left", true);
                GetComponent<Animator>().SetBool("idleL", false);
                GetComponent<Animator>().SetBool("idleR", false);
                GetComponent<Animator>().SetBool("right", false);
                direction = false;
                stand = 2;
            }

            if ((Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.A)) && stand == 2)
            {
                GetComponent<Animator>().SetBool("idleL", true);
                GetComponent<Animator>().SetBool("idleR", false);
                GetComponent<Animator>().SetBool("left", false);
                GetComponent<Animator>().SetBool("right", false);
                direction = false;
                stand = 0;
            }

            if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
            {
                if (GameObject.Find("Girl"))
                {
                    GetComponent<SpriteRenderer>().enabled= false;
                    GetComponent<Animator>().enabled = false;
                    shadow.GetComponent<SpriteRenderer>().enabled = true;
                    shadow.GetComponent<SpriteRenderer>().sortingOrder = 3;
                    GameObject.Find("Girl").GetComponent<GirlWalkAnim>().enabled = true;
                    GameObject.Find("Girl").GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
                    this.enabled = false;
                    GetComponent<LifeManager>().enabled = false;
                    if (direction)
                    {
                        GetComponent<Animator>().SetBool("idleR", true);
                        GetComponent<Animator>().SetBool("idleL", false);
                        GetComponent<Animator>().SetBool("right", false);
                        GetComponent<Animator>().SetBool("left", false);

                        shadow.GetComponent<Animator>().SetBool("idleR", true);
                        shadow.GetComponent<Animator>().SetBool("idleL", false);
                        this.enabled = false;
                    }
                    else
                    {
                        GetComponent<Animator>().SetBool("idleL", true);
                        GetComponent<Animator>().SetBool("idleR", false);
                        GetComponent<Animator>().SetBool("left", false);
                        GetComponent<Animator>().SetBool("right", false);

                        shadow.GetComponent<Animator>().SetBool("idleL", true);
                        shadow.GetComponent<Animator>().SetBool("idleR", false);
                        this.enabled = false;
                    }
                }
            }
        }
    }
}

