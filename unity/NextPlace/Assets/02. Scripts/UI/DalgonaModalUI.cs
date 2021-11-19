using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DalgonaModalUI : MonoBehaviour
{
    private static DalgonaModalUI _instance = null;
    public static DalgonaModalUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<DalgonaModalUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("DalgonaModalUI").AddComponent<DalgonaModalUI>();
                }
            }
            return _instance;
        }
    }

    public TextMeshProUGUI dalgona;
    public TMP_InputField dalgonaNumber;

    void OnEnable()
    {
        Initialize();
    }

    void OnDisable() {
        DataManager.instance.GetUserInfo();
    }

    public void Initialize()
    {        
        dalgona.text = DataManager.instance.userInfo.dalgona.ToString();
    }
}
