using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CatchUI : MonoBehaviour
{
    public Text nameText;
    public Text getItemText;

    public void Initialize(SpotInfo info, string getItem) {
        nameText.text = info.name;
        getItemText.text = getItem;
    }
}
