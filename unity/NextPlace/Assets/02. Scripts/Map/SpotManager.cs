using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpotManager : MonoBehaviour
{
    private static SpotManager _instance = null;
    public static SpotManager instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<SpotManager>();
                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("SpotManager").AddComponent<SpotManager>();
                }
            }
            return _instance;
        }
    }

    public Camera mapCamera;
    public GameObject spot;
    public GameObject player;
    private List<GameObject> _spotList = new List<GameObject>();
    private float _diffX = 70f;

    void OnEnable() {
        //DataManager.instance.GetSpot(36.385d, 127.378d);
        DataManager.instance.GetSpot((float)GPSManager.currentLat, (float)GPSManager.currentLng);
    }

    void OnDisable() {
        foreach(GameObject obj in _spotList) {
            Destroy(obj);
        }
    }
    void Update() {
        if (Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began) {
                RaycastHit hit;
                Ray ray = mapCamera.ScreenPointToRay(touch.position);
                int layerMask = 1 << LayerMask.NameToLayer("Spot");

                if (Physics.Raycast(ray, out hit, Mathf.Infinity, layerMask)) {
                    GameManager.instance.OpenSpotUI(hit.transform.GetComponent<Spot>().spotId);
                }
            }
        }
    }

    public void AddSpotList(GameObject obj) {
        _spotList.Add(obj);
    }

    public void CreateSpots(SpotDataJson spotData) {
        foreach(SpotInfo info in spotData.spotList) {
            Vector3 originPosition = GeoToWorld(GPSManager.currentLat, GPSManager.currentLng);
            Vector3 dataPosition = GeoToWorld(info.lat, info.lng);
            Vector3 spotPosition = originPosition - dataPosition;
            spotPosition.x += _diffX;
            spotPosition.z *= -1;

            GameObject obj = Instantiate(spot, spotPosition, Quaternion.identity);
            obj.GetComponent<Spot>().spotId = info.id;
        }
    }

    public Vector3 GeoToWorld(double lat, double lng) {
        Mapbox.Utils.Vector2d vector2d = Mapbox.Unity.Utilities.Conversions.GeoToWorldPosition(lat, lng, new Mapbox.Utils.Vector2d(), 0.597f * Mathf.Cos((float)GPSManager.currentLat));
        return new Vector3((float)vector2d.x, 0, (float)vector2d.y);
    }
}
