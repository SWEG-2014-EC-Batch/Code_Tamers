package org.example;

import javax.swing.*;

public class Main
{
    public static void main(String[] args) {

        GUI window=new GUI();
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setSize(800,600);
    }
}
