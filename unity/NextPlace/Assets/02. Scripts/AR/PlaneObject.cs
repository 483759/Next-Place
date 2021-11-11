using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneObject : MonoBehaviour
{
    void Awake()
    {
        PlamonManager.instance.AddPlaneList(gameObject);
    }
}
