package org.example;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI extends JFrame implements ActionListener {
    String fileTitle="";
    JTextArea textArea;
    JScrollPane scrollPane;
    JMenuBar menuBar;
    JMenu menuFile, menuEdit, menuFormat;
    JMenuItem iNew,iOpen,iSave,iSaveAs,iClose,iUndo,iRedo,iWordWarp,iFont,iFontSize;
    fileFunctions file=new fileFunctions(this);

    public GUI()
    {
        super("NotePad ");
        textArea=new JTextArea();
        scrollPane=new JScrollPane(textArea,JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED,JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        scrollPane.setBorder(BorderFactory.createEmptyBorder());

        menuBar=new JMenuBar();
        menuFile=new JMenu("File");
        menuEdit=new JMenu("Edit");
        menuFormat=new JMenu("Format");
        createSubMenu();

        add(scrollPane);
        setJMenuBar(menuBar);
        menuBar.add(menuFile);
        menuBar.add(menuEdit);
        menuBar.add(menuFormat);
    }

    void createSubMenu(){
        iNew=new JMenuItem("New");
        iNew.addActionListener(this);
        iNew.setActionCommand("New");

        iOpen=new JMenuItem("Open");
        iOpen.addActionListener(this);
        iOpen.setActionCommand("Open");

        iSave=new JMenuItem("Save");
        iSave.addActionListener(this);
        iSave.setActionCommand("Save");

        iSaveAs=new JMenuItem("Save as");
        iSaveAs.addActionListener(this);
        iSaveAs.setActionCommand("SaveAs");

        iClose=new JMenuItem("Close");
        iClose.addActionListener(this);
        iClose.setActionCommand("Close");

        iUndo=new JMenuItem("Undo");
        iRedo=new JMenuItem("Redo");

        menuFile.add(iNew);
        menuFile.add(iOpen);
        menuFile.add(iSave);
        menuFile.add(iSaveAs);
        menuFile.add(iClose);

        menuEdit.add(iUndo);
        menuEdit.add(iRedo);
    }
    public void changeTitle(String newTitle)
    {
        setTitle("NotePad: "+this.fileTitle);
    }

    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String command=actionEvent.getActionCommand();
        switch (command)
        {
            case "New":
            {
                file.newFile();
                break;
            }
            case "Open":
            {
                file.openFile();
                break;
            }
            case "SaveAs":
            {
                file.saveAs();
                break;
            }
            case "Save":
            {
                file.save();
                break;
            }
            case "Close":
            {
                file.close();
                break;
            }
        }
    }
}