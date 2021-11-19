using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogamFilter : MonoBehaviour
{
    public string filterType { get; set; }
    public long id;
    public string name;
    public string detail;

    public void giveMyDogam()
    {   
        GameManager.instance.ChangeGameState((int)GameManager.GameState.BookDetail);
        DogamDetail.instance.success(id,name,detail);
        
    }
    public void giveNotMyDogam()
    {
        GameManager.instance.ChangeGameState((int)GameManager.GameState.BookDetail);
        DogamDetail.instance.success(id,name,detail);

    }
}

