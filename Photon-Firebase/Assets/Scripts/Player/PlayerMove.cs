using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    [Header("이동")]
    // 필요 요소 속력 방향 사용자의 입력
    public float walkSpeed = 3.5f;
    public float runSpeed = 7.0f;
    float moveSpeed = 0;

    [Header("점프")]
    public float jumpPower = 30.0f;
    public int jumpCount = 2;
    public float gravity = -20.0f;
    float yVelocity = 0;

    [Header("그 외")]
    CharacterController cc;
    bool isjumping = false;
    public int healthPoint = 100;

    void Start()
    {
        cc = transform.GetComponent<CharacterController>();
    }

    public void ApplyDamage(int val)
    {
        healthPoint -= val;
        healthPoint = Mathf.Max(healthPoint, 0);

        print("현재 체력: " + healthPoint);
    }

    private void LateUpdate()
    {
        // 사용자의 입력을 받는다.
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        // 방향을 설정한다.
        Vector3 dir = new Vector3(h, 0, v);
        dir.Normalize();

        // 방향 벡터를 카메라의 방향을 기준으로 재계산한다.
        dir = Camera.main.transform.TransformDirection(dir);

        // 땅에 닿았으면 점프 횟수를 초기화한다.
        if (cc.collisionFlags == CollisionFlags.Below)
        {
            jumpCount = 1;
            isjumping = false;
        }
        else
        {
            //공중에서 속도 조절 못하게 즉 쉬프트 움직임
            isjumping = true;
        }

        // 사용자의 space 키 입력을 받는다.
        if (Input.GetButtonDown("Jump") && jumpCount > 0)
        {
            // 위쪽 방향으로의 힘(점프력)을 추가한다.
            yVelocity = jumpPower;
            jumpCount--;
        }

        // 입력된 방향으로 이동한다(p = p0 + vt).

        moveSpeed = walkSpeed;
        float animSpeed = 0;

        if (dir.magnitude > 0)
        {
            if (Input.GetKey(KeyCode.LeftShift) && !isjumping)
            {
                animSpeed = moveSpeed = dir.magnitude * runSpeed;
            }
            else
            {
                animSpeed = moveSpeed = dir.magnitude * walkSpeed;
            }
        }

        // 중력 값을 적용한다.
        if(yVelocity < gravity)
        {

        }
        else
        yVelocity += gravity * Time.deltaTime;
        dir.y = yVelocity;

        cc.Move(dir * moveSpeed * Time.deltaTime);
    }

}
