using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AchievementDetailUI : MonoBehaviour
{
    private static AchievementDetailUI _instance = null;
    public static AchievementDetailUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<AchievementDetailUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("AchievementDetailUI").AddComponent<AchievementDetailUI>();
                }
            }
            return _instance;
        }
    }

    public TextMeshProUGUI regionName;
    public TextMeshProUGUI exp;
    public Image achievementBar;
    public TextMeshProUGUI percent;
    public GameObject content;
    public GameObject sumnailObject;
    private List<GameObject> _spotList = new List<GameObject>();

    public void Initialize(string gugun, SpotDetailDataJson data)
    {
        foreach (GameObject item in _spotList) Destroy(item);
        _spotList.Clear();

        float rate = (float)data.plactions.Count / (data.spots.Count + data.plactions.Count);
        int rateInt = (int)(rate * 100);

        regionName.text = gugun + " ¾÷Àû ´Þ¼º·ü";
        exp.text = (data.plactions.Count).ToString() + " / " + (data.spots.Count + data.plactions.Count).ToString();
        achievementBar.fillAmount = rate;
        percent.text = rateInt.ToString() + " %";

        foreach(PlactionInfo info in data.plactions) {
            GameObject item = Instantiate(sumnailObject, content.transform) as GameObject;
            item.GetComponent<Image>().sprite = DataManager.instance.GetSprite(info.spot.id.ToString(), DataManager.SpriteResourceType.SpotSumnail);
            _spotList.Add(item);
        }
        foreach (SpotInfo info in data.spots) {
            GameObject item = Instantiate(sumnailObject, content.transform) as GameObject;
            item.GetComponent<Image>().sprite = DataManager.instance.GetSprite(info.id.ToString(), DataManager.SpriteResourceType.SpotSumnailBlur);
            _spotList.Add(item);
        }
    }
}
