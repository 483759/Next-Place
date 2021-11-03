using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class CameraController : MonoBehaviour {
    public GameObject player;
    public Vector3 cameraDistance;
    public Text text;
    public float Speed;

    private Transform _mainCameraTransform;
    private Transform _playerTransform;
    private Vector3 _moveDistance;
    private Vector2 _currentPos, _previousPos;
    private Vector3 _moveVector;
    private bool _isMoving;

    // Start is called before the first frame update
    void Start() {
        _mainCameraTransform = gameObject.transform;
        _playerTransform = player.transform;
        _isMoving = false;
    }

    // Update is called once per frame
    void Update() {
        if (Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);
            if (!EventSystem.current.IsPointerOverGameObject(touch.fingerId)) {
                if(touch.phase == TouchPhase.Began) {
                    _previousPos = touch.position - touch.deltaPosition;
                    _moveDistance = new Vector3(0, 0, 0);
                    _isMoving = true;
                
                } else if(touch.phase == TouchPhase.Moved) {
                    _currentPos = touch.position - touch.deltaPosition;
                    Vector2 diff = _previousPos - _currentPos;
                    Quaternion quaternion = Quaternion.Euler(new Vector3(0, _playerTransform.rotation.eulerAngles.y, 0));
                    _moveVector = (quaternion * new Vector3(diff.x, 0, diff.y)) * Speed;

                    _moveDistance += _moveVector;
                    _mainCameraTransform.Translate(_moveVector, Space.World);
                    _previousPos = touch.position - touch.deltaPosition;
                    text.text = _moveVector + "";
                }
            }

        } else if(!_isMoving) {
            Quaternion quaternion = Quaternion.Euler(new Vector3(0, _playerTransform.rotation.eulerAngles.y + 180, 0));
            _mainCameraTransform.position = _playerTransform.position + (quaternion * cameraDistance);
            _mainCameraTransform.LookAt(_playerTransform);
        }
    }

    public void ResetPosition() {
        _isMoving = false;
    }
}
