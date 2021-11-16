using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

[Serializable]
public class UserInfoDataJson
{
    public long id;
    public string nickname;
    public int gold;
    public int dalgona;
    public string avatar;
    public string role;
}
