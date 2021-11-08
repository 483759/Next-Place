using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class RestRequest : MonoBehaviour {

    private static RestRequest _instance = null;
    private static RestRequest instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<RestRequest>();

                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("RestRequest").AddComponent<RestRequest>();
                }
            }
            return _instance;
        }
    }

    private void Awake() {
        var objs = FindObjectsOfType<RestRequest>();

        if (objs.Length != 1) {
            Destroy(gameObject);
            return;
        }

        DontDestroyOnLoad(gameObject);
    }

    public static void DoRequest(string[][] field) {
        instance.StartCoroutine(instance.sendRequest(field));
    }

    IEnumerator sendRequest(string[][] field) {
        string url = URLManager.TEST_URL;
        WWWForm form = new WWWForm();

        foreach (string[] s in field) {
            form.AddField(s[0], s[1]);
        }

        using (UnityWebRequest www = UnityWebRequest.Post(url, form)) {

            yield return www.SendWebRequest();

            if (www.error == null) {
                Debug.Log(www.downloadHandler.text);
            } else {
                Debug.Log("error");
            }
        }
    }
}
