using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CharacterDetailUI : MonoBehaviour
{
    private static CharacterDetailUI _instance = null;
    public static CharacterDetailUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<CharacterDetailUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("CharacterDetailUI").AddComponent<CharacterDetailUI>();
                }
            }
            return _instance;
        }
    }

    public Image mainImage;
    public TextMeshProUGUI level;
    public TextMeshProUGUI information;
    public TextMeshProUGUI representBtn;
    public TextMeshProUGUI name;
    public TextMeshProUGUI exp;
    public Image expBar;
    public TextMeshProUGUI sailBtn;

    public void Initialize(Myplamon data) {
        if (!data.main) {
            mainImage.sprite = Resources.Load<Sprite>("Character/Main/" + data.pladex.id.ToString()) as Sprite;
            level.text = "LV " + data.level.ToString();
            information.text = data.pladex.information;
            name.text = data.nickname;
            representBtn.text = "대표 캐릭터 변경";
            exp.text = (data.exp - DataManager.instance.expTable[data.level, 0]).ToString() + " / " + DataManager.instance.expTable[data.level, 1].ToString();
            expBar.fillAmount = (data.exp - DataManager.instance.expTable[data.level, 0]) / DataManager.instance.expTable[data.level, 1];
            sailBtn.text = "판매";
        } else {
            mainImage.sprite = Resources.Load<Sprite>("Character/Main/" + data.pladex.id.ToString()) as Sprite;
            level.text = "LV " + data.level.ToString();
            information.text = data.pladex.information;
            name.text = data.nickname;
            representBtn.text = "";
            exp.text = (data.exp - DataManager.instance.expTable[data.level, 0]).ToString() + " / " + DataManager.instance.expTable[data.level, 1].ToString();
            expBar.fillAmount = (data.exp - DataManager.instance.expTable[data.level, 0]) / DataManager.instance.expTable[data.level, 1];
            sailBtn.text = "";
        }
    }
}
