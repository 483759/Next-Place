using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour
{
    public Camera arCamera;
    public float resetTime;
    public float force;

    private int _count;
    private Rigidbody _rigidbody;
    private bool _isReady;
    Vector2 _startPos;

    // Start is called before the first frame update
    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
    }

    void OnEnable() {
        _count = 0;
        ResetBall();
    }

    void Update()
    {
        if (!_isReady) return;
        SetBallPosition(arCamera.transform);

        if (_count < 100) {
            _count++;
            return;
        }

        if(Input.touchCount > 0 && _isReady) {
            Touch touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Began) {
                _startPos = touch.position;
            }
            else if(touch.phase == TouchPhase.Ended) {
                float dragDistance = touch.position.y - _startPos.y;

                Vector3 throwAngle = (arCamera.transform.forward + arCamera.transform.up).normalized;
                _rigidbody.isKinematic = false;
                _isReady = false;

                _rigidbody.AddForce(throwAngle * dragDistance * force, ForceMode.VelocityChange);
                Invoke("ResetBall", resetTime);
            }
        }
    }

    private void SetBallPosition(Transform anchor) {
        Vector3 offset = anchor.forward * 0.5f + anchor.up * -0.2f;
        transform.position = anchor.position + offset;
    }

    private void ResetBall() {
        _rigidbody.isKinematic = true;
        _rigidbody.velocity = Vector3.zero;

        _isReady = true;
    }

    private void OnCollisionEnter(Collision collision) {
        if (_isReady) return;

        PlamonManager.instance.Catch();
    }
}
