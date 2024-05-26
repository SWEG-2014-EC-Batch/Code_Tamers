package org.example;

import java.awt.*;
import java.io.*;

public class fileFunctions {
    GUI gui;
    String fileName,filePath;
    public fileFunctions(GUI gui)
    {
        this.gui=gui;
    }

    public void newFile()
    {
        gui.textArea.setText("");
        gui.setTitle("New");
    }
    public void openFile()
    {
        FileDialog fd=new FileDialog(gui,"Open",FileDialog.LOAD);
        fd.setVisible(true);

        if(fd.getFile()!=null)
        {
            fileName=fd.getFile();
            filePath=fd.getDirectory();
            gui.setTitle(fileName);
        }

        try{
            BufferedReader br=new BufferedReader(new FileReader(filePath+fileName));
            gui.textArea.setText("");
            String line=null;
            while((line = br.readLine())!=null)
            {
                gui.textArea.append(line+"\n");
            }
            br.close();
        }catch (Exception e)
        {
            e.printStackTrace();
            System.out.println("The file is not opened");
        }
    }


}
