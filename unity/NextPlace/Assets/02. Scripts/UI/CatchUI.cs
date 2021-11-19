using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CatchUI : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI getItemText;

    public void Initialize(SpotInfo info, string getItem) {
        nameText.text = info.name + " È¹µæ!";
        getItemText.text = "+ " + getItem + "G";
    }
}
