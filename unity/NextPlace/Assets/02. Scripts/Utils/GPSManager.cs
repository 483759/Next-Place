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
        // ������ GPS ��������� ���� üũ
        if (!Input.location.isEnabledByUser) {
            Debug.Log("GPS is not enabled");
            yield break;
        }

        //GPS ���� ����
        Input.location.Start();
        Debug.Log("Awaiting initialization");

        //Ȱ��ȭ�� �� ���� ���
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
            yield return _second;
            maxWait -= 1;
        }

        //20�� ������� Ȱ��ȭ �ߴ�
        if (maxWait < 1) {
            Debug.Log("Timed out");
            yield break;
        }

        //���� ����
        if (Input.location.status == LocationServiceStatus.Failed) {
            Debug.Log("Unable to determine device location");
            yield break;

        } else {
            //���� �㰡��, ���� ��ġ ���� �޾ƿ���
            _location = Input.location.lastData;
            firstLat = _location.latitude * 1.0d;
            firstLng = _location.longitude * 1.0d;
            gpsStarted = true;

            //���� ��ġ ����
            while (gpsStarted) {
                _location = Input.location.lastData;
                currentLat = _location.latitude * 1.0d;
                currentLng = _location.longitude * 1.0d;
                yield return _second;
            }
        }
    }
}