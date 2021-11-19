using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AchievementDaejeonUI : MonoBehaviour
{
    private static AchievementDaejeonUI _instance = null;
    public static AchievementDaejeonUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<AchievementDaejeonUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("AchievementDaejeonUI").AddComponent<AchievementDaejeonUI>();
                }
            }
            return _instance;
        }
    }

    public Image yuseong;
    public Image seo;
    public Image joong;
    public Image dong;
    public Image daedeok;

    void OnEnable()
    {
        Initialize(DataManager.instance.plactionCityCountInfo);
    }

    public string[] regions = new string[] { "yuseong", "seo", "joong", "dong", "daedeok" };

    public static string CountPercent(int total, int myCount)
    {
        if (total == 0)
        {
            return "01";
        }

        double count = ((double)myCount / (double)total) * 100;

        if (count >= 100)
        {
            return "03";
        }
        else if (count >= 50)
        {
            return "02";
        }
        else
        {
            return "01";
        }
    }

    public void Initialize(AchievementDataJson data)
    {
        foreach (MyPlactionCounts item in data.myPlactionCounts)
        {
            string region = regions[item.id];
            string color = CountPercent(item.totalCount, item.myCount);

            switch (item.id)
            {
                case 0:
                    yuseong.sprite = Resources.Load<Sprite>("Map/Region/Daejeon/" + region + "/" + color) as Sprite;
                    break;
                case 1:
                    seo.sprite = Resources.Load<Sprite>("Map/Region/Daejeon/" + region + "/" + color) as Sprite;
                    break;
                case 2:
                    joong.sprite = Resources.Load<Sprite>("Map/Region/Daejeon/" + region + "/" + color) as Sprite;
                    break;
                case 3:
                    dong.sprite = Resources.Load<Sprite>("Map/Region/Daejeon/" + region + "/" + color) as Sprite;
                    break;
                case 4:
                    daedeok.sprite = Resources.Load<Sprite>("Map/Region/Daejeon/" + region + "/" + color) as Sprite;
                    break;                
            }
        }
    }
}
