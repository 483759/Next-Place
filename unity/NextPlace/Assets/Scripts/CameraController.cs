using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraController : MonoBehaviour
{
    public GameObject Player;
    public Vector3 CameraDistance;

    private Camera _mainCamera;

    // Start is called before the first frame update
    void Start()
    {
        _mainCamera = gameObject.GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        Quaternion quaternion = Quaternion.Euler(new Vector3(0, Player.transform.rotation.eulerAngles.y + 180, 0));
        _mainCamera.transform.position = Player.transform.position + (quaternion * CameraDistance);
        _mainCamera.transform.LookAt(Player.transform);
    }
}
