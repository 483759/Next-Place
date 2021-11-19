using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlamonManager : MonoBehaviour
{
    private static PlamonManager _instance = null;
    public static PlamonManager instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<PlamonManager>();

                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("PlamonManager").AddComponent<PlamonManager>();
                }
            }
            return _instance;
        }
    }

    public Camera arCamera;
    public GameObject indicator;
    public GameObject ball;
    public GameObject plamonObject;
    public GameObject catchUI;
    public float endDelay;
    private bool _isGameStarted;
    private ARRaycastManager _arManager;
    private List<GameObject> _planeList = new List<GameObject>();

    [HideInInspector]
    public Sprite sprite { get; set; }

    void Awake() {
        _arManager = GetComponent<ARRaycastManager>();
    }

    void OnEnable() {
        indicator.SetActive(false);
        plamonObject.SetActive(false);
        ball.SetActive(false);
        _isGameStarted = false;
    }

    void Update()
    {
        if (!_isGameStarted) {
            DetectGround();

            if (indicator.activeInHierarchy && Input.touchCount > 0) {
                Touch touch = Input.GetTouch(0);

                if(touch.phase == TouchPhase.Began) {
                    RaycastHit hit;
                    Ray ray = arCamera.ScreenPointToRay(touch.position);
                    int layerMask = 1 << LayerMask.NameToLayer("Indicator");

                    if (Physics.Raycast(ray, out hit, Mathf.Infinity, layerMask)) {
                        GameStart();
                    }
                }
            }
        }
    }

    void OnDisable() {
        foreach(GameObject obj in _planeList) {
            if (obj != null) Destroy(obj);
        }
        indicator.SetActive(false);
        plamonObject.SetActive(false);
        ball.SetActive(false);
    }

    private void DetectGround() {
        Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
        List<ARRaycastHit> hitInfos = new List<ARRaycastHit>();

        if(_arManager.Raycast(screenSize, hitInfos, TrackableType.Planes)) {
            if(hitInfos[0].distance < 0.5f) {
                indicator.SetActive(false);
                return;
            }

            if(!indicator.activeSelf)indicator.SetActive(true);
            indicator.transform.position = hitInfos[0].pose.position;
            indicator.transform.rotation = hitInfos[0].pose.rotation;

            indicator.transform.position += indicator.transform.up * 0.1f;

        } else {
            indicator.SetActive(false);
        }

    }

    public void AddPlaneList(GameObject obj) {
        _planeList.Add(obj);
    }

    public void GameStart() {
        _isGameStarted = true;
        plamonObject.transform.position = indicator.transform.position;
        plamonObject.transform.rotation = indicator.transform.rotation;
        plamonObject.GetComponent<PlamonObject>().Initialize(GameManager.instance.selectedSpotId);

        indicator.SetActive(false);

        plamonObject.SetActive(true);
        ball.SetActive(true);
    }

    public void Catch() {
        plamonObject.SetActive(false);
        ball.SetActive(false);

        DataManager.instance.PostPlaction(GameManager.instance.selectedSpotId);
    }

    public void CatchEnd(PlactionDataJson plaction) {
        catchUI.SetActive(true);
        catchUI.GetComponent<CatchUI>().Initialize(DataManager.instance.GetSpotInfoById(GameManager.instance.selectedSpotId), plaction.gold.ToString());

        Invoke("GameEnd", endDelay);
    }

    public void GameEnd() {
        catchUI.SetActive(false);

        GameManager.instance.ChangeGameState(1);
    }
}
