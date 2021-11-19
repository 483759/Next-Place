using System.Collections;
using UnityEngine;

public class GPSManager : MonoBehaviour {

    public static double firstLat;
    public static double firstLng;
    public static double currentLat;
    public static double currentLng;

    public static bool gpsStarted = false;
    private static WaitForSeconds _second;
    private static LocationInfo _location;

    private void Awake() {
        _second = new WaitForSeconds(0.2f);
    }

    IEnumerator Start() {
        // 유저가 GPS 사용중인지 최초 체크
        if (!Input.location.isEnabledByUser) {
            Debug.Log("GPS is not enabled");
            yield break;
        }

        //GPS 서비스 시작
        Input.location.Start();
        Debug.Log("Awaiting initialization");

        //활성화될 때 까지 대기
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
            yield return _second;
            maxWait -= 1;
        }

        //20초 지날경우 활성화 중단
        if (maxWait < 1) {
            Debug.Log("Timed out");
            yield break;
        }

        //연결 실패
        if (Input.location.status == LocationServiceStatus.Failed) {
            Debug.Log("Unable to determine device location");
            yield break;

        } else {
            //접근 허가됨, 최초 위치 정보 받아오기
            _location = Input.location.lastData;
            firstLat = _location.latitude * 1.0d;
            firstLng = _location.longitude * 1.0d;
            gpsStarted = true;

            //현재 위치 갱신
            while (gpsStarted) {
                _location = Input.location.lastData;
                currentLat = _location.latitude * 1.0d;
                currentLng = _location.longitude * 1.0d;
                yield return _second;
            }
        }
    }
}