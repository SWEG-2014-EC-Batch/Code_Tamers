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
        fileName=null;
        filePath=null;
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
            String line;
            while((line = br.readLine())!=null)
            {
                gui.textArea.append(line+"\n");
            }
            br.close();
        }catch (Exception e)
        {
            System.out.println("The file is not opened");
        }
    }
    public void save()
    {
        if(fileName==null)
        {
            saveAs();
        }
        else{
            try{
                FileWriter fw=new FileWriter(filePath+fileName);
                gui.setTitle(fileName);
                fw.write(gui.textArea.getText());
                fw.close();
            }
            catch (Exception e)
            {
                System.out.println("File failed to save");
            }
        }
    }
    public void saveAs()
    {
        FileDialog fd=new FileDialog(gui,"SaveAS",FileDialog.SAVE);
        fd.setVisible(true);

        if(fd.getFile()!=null)
        {
            fileName=fd.getFile();
            filePath=fd.getDirectory();
            gui.setTitle(fileName);
        }
        try{
            FileWriter fw=new FileWriter(filePath+fileName);
            fw.write(gui.textArea.getText());
            fw.close();
        }
        catch (Exception e)
        {
            System.out.println("File failed to save");
        }
    }
    public void close()
    {

        System.exit(0);
    }

}
