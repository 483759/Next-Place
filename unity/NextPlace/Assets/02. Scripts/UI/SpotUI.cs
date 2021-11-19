using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SpotUI : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI typeText;
    public TextMeshProUGUI informationText;
    public TextMeshProUGUI detailText;
    public GameObject startButton;
    public GameObject farText;
    public Image spotImage;
    public GameObject player;

    public void Initialize(SpotInfo info, Vector3 position) {
        spotImage.sprite = DataManager.instance.GetSprite(info.id.ToString(), DataManager.SpriteResourceType.SpotMain);
        nameText.text = info.name;
        typeText.text = info.type;
        informationText.text = info.information;
        detailText.text = info.detail;

        if (Vector3.Distance(player.transform.position, position) < 50f) {
            startButton.SetActive(true);
            farText.SetActive(false);

        } else {
            startButton.SetActive(false);
            farText.SetActive(true);

        }
    }
}
