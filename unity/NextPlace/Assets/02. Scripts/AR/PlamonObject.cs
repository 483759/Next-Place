using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlamonObject : MonoBehaviour
{
    public Image image;
    private Material _material;
    private Color _color;
    private int _count;

    void Awake() {
        _material = gameObject.GetComponent<Renderer>().material;
        _color = _material.color;
    }

    void OnEnable() {
        _count = 0;
        _material.color = _color;
        image.color = _color;
        // image.sprite = PlamonManager.instance.sprite;
    }


    // Update is called once per frame
    void Update()
    {
        if(_count < 100) {
            _count++;
            _material.color = new Color(_color.r, _color.g, _color.b, _count / 100f);
            image.color = new Color(_color.r, _color.g, _color.b, _count / 100f);
        }
    }

    public void Initialize(long spotId) {
        image.sprite = DataManager.instance.GetSprite(spotId.ToString(), DataManager.SpriteResourceType.SpotSumnail);
    }
}
