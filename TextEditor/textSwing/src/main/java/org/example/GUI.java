package org.example;
import javax.swing.*;
import javax.swing.undo.UndoManager;
import java.util.Vector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI extends JFrame implements ActionListener {
    JTextArea textArea;
    boolean wWarp=false;
    JScrollPane scrollPane;
    JMenuBar menuBar;
    JMenu menuFile, menuEdit, menuFormat,formatFont,formatFontSize;
    JMenuItem iNew,iOpen,iSave,iSaveAs,iClose,iUndo,iRedo,iWordWarp;
    Vector<JMenuItem>fonts=new Vector<>();
    Vector<JMenuItem>fontSize=new Vector<>();
    fileFunctions file=new fileFunctions(this);
    formatFunction format=new formatFunction(this);
    editFunction edit=new editFunction(this);
    UndoManager um=new UndoManager();
    public GUI()
    {
        super("NotePad ");
        textArea=new JTextArea();
        textArea.getDocument().addUndoableEditListener(
                undoableEditEvent -> um.addEdit(undoableEditEvent.getEdit())
        );
        scrollPane=new JScrollPane(textArea,JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED,JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        scrollPane.setBorder(BorderFactory.createEmptyBorder());

        addFont();
        addFontSize();
        menuBar=new JMenuBar();
        menuFile=new JMenu("File");
        menuEdit=new JMenu("Edit");
        menuFormat=new JMenu("Format");
        formatFont=new JMenu("Font");
        formatFontSize=new JMenu("Font size");
        createSubMenu();

        add(scrollPane);
        setJMenuBar(menuBar);
        menuBar.add(menuFile);
        menuBar.add(menuEdit);
        menuBar.add(menuFormat);
        format.selectedFont="Times";
        format.makeFont(12);
        format.wordWarp();
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
        iUndo.addActionListener(this);
        iUndo.setActionCommand("Undo");

        iRedo=new JMenuItem("Redo");
        iRedo.addActionListener(this);
        iRedo.setActionCommand("Redo");

        iWordWarp=new JMenuItem("Word warp: Off");
        iWordWarp.addActionListener(this);
        iWordWarp.setActionCommand("WordWarp");

        menuFile.add(iNew);
        menuFile.add(iOpen);
        menuFile.add(iSave);
        menuFile.add(iSaveAs);
        menuFile.add(iClose);

        menuEdit.add(iUndo);
        menuEdit.add(iRedo);

        menuFormat.add(iWordWarp);

        menuFormat.add(formatFont);
        for(JMenuItem a:fonts)
        {
            formatFont.add(a);
        }
        fonts.get(0).setActionCommand("Times");
        fonts.get(0).addActionListener(this);
        fonts.get(1).addActionListener(this);
        fonts.get(1).setActionCommand("Arial");
        fonts.get(2).addActionListener(this);
        fonts.get(2).setActionCommand("Comics");

        menuFormat.add(formatFontSize);
        for(JMenuItem a:fontSize)
        {
            formatFontSize.add(a);
        }
        fontSize.get(0).addActionListener(this);
        fontSize.get(0).setActionCommand("Size:8");
        fontSize.get(1).addActionListener(this);
        fontSize.get(1).setActionCommand("Size:12");
        fontSize.get(2).addActionListener(this);
        fontSize.get(2).setActionCommand("Size:16");

    }
    void addFont()
    {
        fonts.add(new JMenuItem("Times New Roman"));
        fonts.add(new JMenuItem("Arial"));
        fonts.add(new JMenuItem("Comics San"));
    }
    void addFontSize()
    {
        fontSize.add(new JMenuItem("Font Size:8"));
        fontSize.add(new JMenuItem("Font Size:12"));
        fontSize.add(new JMenuItem("Font Size:16"));
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
            case "Undo":
                edit.undo();
                break;
            case "Redo":
                edit.redo();
                break;
            case "WordWarp":
            {
                format.wordWarp();
                break;
            }
            case "Arial":
                format.setFont("Arial");
                break;
            case "Times":
                format.setFont("Times");
                break;
            case "Comics":
                format.setFont("Comics");
                break;
            case "Size:8":
                format.makeFont(8);
                break;
            case "Size:12":
                format.makeFont(12);
                break;
            case "Size:16":
            {
                format.makeFont(16);
                break;
            }
        }
    }
}