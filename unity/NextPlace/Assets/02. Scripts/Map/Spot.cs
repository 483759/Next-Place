using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spot : MonoBehaviour
{
    public int weight;
    public long spotId;
    private int _count;

    void OnEnable() {
        _count = 0;
        SpotManager.instance.AddSpotList(gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        _count++;
        _count = _count % (360 * weight);
        transform.rotation = Quaternion.Euler(0, _count / weight, 0);
    }

    public void OpenUI() {
        GameManager.instance.OpenSpotUI(spotId);
    }
}
