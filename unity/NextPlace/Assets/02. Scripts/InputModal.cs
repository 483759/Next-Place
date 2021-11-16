using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputModal : MonoBehaviour
{
    public InputField nameInputField;
    public InputField contentInputField;
    void LockInput(InputField input)
    {
        if (input.text.Length > 0)
        {
            Debug.Log("Good");
        }
        else if(input.text.Length == 0)
        {
            Debug.Log("nothing");
        }
    }
    // Start is called before the first frame update
    public void Start()
    {
        //Use onEndEdit 
        nameInputField.onEndEdit.AddListener(delegate{LockInput(nameInputField);}); 
        contentInputField.onEndEdit.AddListener(delegate{LockInput(contentInputField);}); 
        //Use onSubmit 
        // nameInputField.onSubmit.AddListener(delegate{LockInput(nameInputField);});
        // contentInputField.onSubmit.AddListener(delegate{LockInput(contentInputField);});

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
