using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AchievementCountryUI : MonoBehaviour
{    
    public Image gyeongi;
    public Image seoul;
    public Image incheon;
    public Image chungnam;
    public Image chungbuk;
    public Image daejeon;
    public Image gyungnam;
    public Image gyungbuk;
    public Image gangwon;
    public Image junbuk;
    public Image junnam;
    public Image gwangju;
    public Image busan;
    public Image ulsan;
    public Image jeju;

    void OnEnable()
    {
        Initialize(DataManager.instance.plactionCountInfo);
    }

    public string[] regions = new string[] { "seoul", "incheon", "daejeon", "busan", "ulsan", "gwangju", "jeju", "gyeongi", "gangwon", "chungbuk", "chungnam", "gyungbuk", "gyungnam", "junbuk", "junnam" };

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
                    seoul.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 1:
                    incheon.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 2:
                    daejeon.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 3:
                    busan.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 4:
                    ulsan.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 5:
                    gwangju.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 6:
                    jeju.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 7:
                    gyeongi.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 8:
                    gangwon.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 9:
                    chungbuk.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 10:
                    chungnam.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 11:
                    gyungbuk.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 12:
                    gyungnam.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 13:
                    junbuk.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
                case 14:
                    junnam.sprite = Resources.Load<Sprite>("Map/Country/" + region + "/" + color) as Sprite;
                    break;
            }
        }
    }
}
