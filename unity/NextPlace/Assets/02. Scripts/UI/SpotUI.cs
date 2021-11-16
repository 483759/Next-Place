using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpotUI : MonoBehaviour
{
    public Text nameText;
    public Text typeText;
    public Text informationText;
    public Text detailText;

    public void Initialize(SpotInfo info) {
        nameText.text = info.name;
        typeText.text = info.type;
        informationText.text = info.information;
        detailText.text = info.detail;
    }
}
