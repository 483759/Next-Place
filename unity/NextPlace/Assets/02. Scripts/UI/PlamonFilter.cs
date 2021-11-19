using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlamonFilter : MonoBehaviour
{
    // Start is called before the first frame update
    public string filterType { get; set; }
    public long id;
    public long spriteId;
    public string name;
    public string information;
    public long level;
    public long exp;
    public string rank;
    public bool main;


    public void giveMyCharacter()
    {   
        GameManager.instance.ChangeGameState((int)GameManager.GameState.MyCharacterDetail);
        CharacterDetailUI.instance.success(id, spriteId, name, information, level, exp, rank, main);
        
    }
    public void giveNotMyCharacter()
    {
        GameManager.instance.ChangeGameState((int)GameManager.GameState.MyCharacterDetail);
        CharacterDetailUI.instance.success(id, spriteId, name, information, level, exp, rank, main);

    }
}
