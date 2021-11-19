using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


[Serializable]
public class AllPlactionDataJson
{
    public List<PlactionInfo> plactions;
    public List<SpotInfo> spots;
}
