using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GatchaModalUI : MonoBehaviour
{
    private static GatchaModalUI _instance = null;
    public static GatchaModalUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<GatchaModalUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("GatchaModalUI").AddComponent<GatchaModalUI>();
                }
            }
            return _instance;
        }
    }
    public Image mainImage;
    public TextMeshProUGUI characterName;
    public TextMeshProUGUI rank;

    void OnDisable()
    {
        // ¸ð´Þ ²ø ¶§ °«Ã­ UIÀÇ °ñµå¸¦ °»½ÅÇØÁØ´Ù.
        GatchaUI.instance.Initialize(DataManager.instance.userInfo);
    }

    public void Initialize(Myplamon info)
    {
        mainImage.sprite = Resources.Load<Sprite>("Character/Main/" + info.pladex.id.ToString()) as Sprite;
        characterName.text = info.pladex.name;
        rank.text = "Rank - " + info.pladex.rank;
    }
}
