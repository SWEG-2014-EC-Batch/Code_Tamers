package org.example;

import com.formdev.flatlaf.intellijthemes.*;

import javax.swing.*;

public class Main
{
    public static void main(String[] args) {

        try{
            UIManager.setLookAndFeel(new FlatArcDarkIJTheme());
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
        GUI window=new GUI();
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setSize(800,600);
    }
}
