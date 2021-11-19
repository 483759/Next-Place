using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GatchaUI : MonoBehaviour
{
    private static GatchaUI _instance = null;
    public static GatchaUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<GatchaUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("GatchaUI").AddComponent<GatchaUI>();
                }
            }
            return _instance;
        }
    }

    public TextMeshProUGUI goldText;

    void OnEnable()
    {
        Initialize(DataManager.instance.userInfo);
    }

    public void Initialize(UserInfoDataJson info)
    {
        goldText.text = info.gold.ToString();
    }
}
