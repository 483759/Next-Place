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

    public long nowPlamonId = 0;

    public void Initialize(Myplamon data) {
        if (!data.main) {
            mainImage.sprite = DataManager.instance.GetSprite(data.pladex.id.ToString(), DataManager.SpriteResourceType.CharacterMain); 
            level.text = "LV " + data.level.ToString();
            information.text = data.pladex.information;
            name.text = data.nickname;
            representBtn.text = "대표 캐릭터로 변경";
            exp.text = (data.exp).ToString() + " / " + DataManager.instance.expTable[data.level + 1, 1].ToString();
            expBar.fillAmount = (float)(data.exp)/DataManager.instance.expTable[data.level + 1, 1];
            sailBtn.text = "판매";
            nowPlamonId = data.id;
        } else {
            mainImage.sprite = DataManager.instance.GetSprite(data.pladex.id.ToString(), DataManager.SpriteResourceType.CharacterMain);
            level.text = "LV " + data.level.ToString();
            information.text = data.pladex.information;
            name.text = data.nickname;
            representBtn.text = "";
            exp.text = (data.exp).ToString() + " / " + DataManager.instance.expTable[data.level + 1, 1].ToString();
            expBar.fillAmount = (float)(data.exp)/DataManager.instance.expTable[data.level + 1, 1];
            sailBtn.text = "";
            nowPlamonId = data.id;
        }
    }


    public void success(long id, long spriteId, string name, string information,long level,long exp,string rank,bool main) {
        if (!main) {
            mainImage.sprite = DataManager.instance.GetSprite(spriteId.ToString(), DataManager.SpriteResourceType.CharacterMain);
            this.level.text = "LV " + level.ToString();
            this.information.text = information;
            this.name.text = name;
            representBtn.text = "대표 캐릭터로 변경";
            this.exp.text = (exp).ToString() + " / " + DataManager.instance.expTable[level + 1, 1].ToString();
            expBar.fillAmount = (float)(exp)/DataManager.instance.expTable[level + 1, 1];
            sailBtn.text = "판매";
            nowPlamonId = id;
            Debug.Log(nowPlamonId);
        } else {
            mainImage.sprite = DataManager.instance.GetSprite(spriteId.ToString(), DataManager.SpriteResourceType.CharacterMain);
            this.level.text = "LV " + level.ToString();
            this.information.text = information;
            this.name.text = name;
            representBtn.text = "";
            this.exp.text = (exp).ToString() + " / " + DataManager.instance.expTable[level + 1, 1].ToString();
            expBar.fillAmount = (float)(exp)/DataManager.instance.expTable[level + 1, 1];
            sailBtn.text = "";
            nowPlamonId = id;
            Debug.Log(nowPlamonId);
        }
    }
}
