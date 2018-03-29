using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextEditScript : MonoBehaviour
{
    public TextMesh photoDesc;
    public int descLineLength;
    private string desc = "";
    private TouchScreenKeyboard userKeyboard;

    void Update()
    {
        if((userKeyboard != null) && userKeyboard.done)
        {
            desc = StringNewline(userKeyboard.text, descLineLength);
            photoDesc.text = desc;
        }
    }

    public void OpenKeyboard()
    {
        userKeyboard = TouchScreenKeyboard.Open(desc, TouchScreenKeyboardType.Default);
    }
    
   
    public string StringNewline(string s, int lineLength)
    {
        for(int i = 0; i < s.Length; i+= lineLength)
        {
           s = s.Insert(i, "\n");
        }
        return s;
    }
    
}
