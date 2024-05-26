package org.example;
import java.awt.Font;

public class formatFunction
{
    GUI gui;
    Font Arial,Comics,Times;
    String selectedFont;

    formatFunction(GUI gui)
    {
        this.gui=gui;
    }

    public void wordWarp()
    {
        if(!gui.wWarp)
        {
            gui.wWarp=true;
            gui.textArea.setLineWrap(true);
            gui.textArea.setWrapStyleWord(true);
            gui.iWordWarp.setText("Word warp: On");
        }
        else
        {
            gui.wWarp=false;
            gui.textArea.setLineWrap(false);
            gui.textArea.setWrapStyleWord(false);
            gui.iWordWarp.setText("Word warp: Off");
        }
    }
    public void makeFont(int fontSize)
    {
        Arial=new Font("Arial",Font.PLAIN,fontSize);
        Times=new Font("Times New Roman",Font.PLAIN,fontSize);
        Comics=new Font("Comic Sans MS",Font.PLAIN,fontSize);
        setFont(selectedFont);
    }
    public void setFont(String font)
    {
        selectedFont=font;
        switch (selectedFont)
        {
            case "Arial":
                gui.textArea.setFont(Arial);
                break;
            case "Times":
                gui.textArea.setFont(Times);
                break;
            case "Comics":
                gui.textArea.setFont(Comics);
                break;
        }
    }
}
