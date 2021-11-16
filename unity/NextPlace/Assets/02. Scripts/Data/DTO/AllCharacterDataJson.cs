using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


[Serializable]
public class AllCharacterDataJson
{
    public List<CharacterInfo> pladexList;
}

[Serializable]
public class CharacterInfo
{
    public long id;
    public string name;
    public string information;
    public string rank;
}