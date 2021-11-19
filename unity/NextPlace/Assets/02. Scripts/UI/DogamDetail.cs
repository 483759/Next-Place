using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class DogamDetail : MonoBehaviour
{
    private static DogamDetail _instance = null;
    public static DogamDetail instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<DogamDetail>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("DogamDetail").AddComponent<DogamDetail>();
                }
            }
            return _instance;
        }
    }
    // public GameObject detail;
    public Image main;
    public TextMeshProUGUI name;
    public TextMeshProUGUI detail;
    public void success(long prefabId, string prefabName, string prefabDetail)
    {
        // Debug.Log(main);
        // Debug.Log(prefabId);
        // Debug.Log("Spot/Sumnail/"+prefabId.ToString());
        main.sprite = Resources.Load<Sprite>("Spot/Sumnail/"+prefabId.ToString()) as Sprite;
        name.text = prefabName;
        detail.text = prefabDetail;
        // Debug.Log(prefabId);
        // Debug.Log(prefabName);
        // Debug.Log(prefabDetail);


    }

}
