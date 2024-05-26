package org.example;

import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

//The methods that the file menu items use
public class fileFunctions {
    GUI gui;
    dbManager db;
    String fileName, filePath;
    String insertSQL = "INSERT INTO files (name, path) VALUES (?, ?)";

    public fileFunctions(GUI gui, dbManager db) {
        this.gui = gui;
        this.db = db; // Initialize dbManager object
    }

    public void newFile() {
        gui.textArea.setText("");
        gui.setTitle("New");
        fileName = null;
        filePath = null;
    }

    public void openFile() {
        FileDialog fd = new FileDialog(gui, "Open", FileDialog.LOAD);
        fd.setVisible(true);

        if (fd.getFile() != null) {
            fileName = fd.getFile();
            filePath = fd.getDirectory();
            gui.setTitle(fileName);
        }

        try {
            BufferedReader br = new BufferedReader(new FileReader(filePath + fileName));
            gui.textArea.setText("");
            String line;
            while ((line = br.readLine()) != null) {
                gui.textArea.append(line + "\n");
            }
            br.close();
        } catch (Exception e) {
            System.out.println("The file is not opened");
        }

        // Insert a record into the files table
        try (PreparedStatement pstmt = db.getConn().prepareStatement(insertSQL)) {
            pstmt.setString(1, fileName);
            pstmt.setString(2, filePath);
            pstmt.executeUpdate();
            System.out.println("Record inserted into 'files' table");
        } catch (Exception e) {
            System.out.println("Recording the data failed");
        } finally {
            populateRecent();
        }
    }

    public void openFile(String path) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(path));
            gui.textArea.setText("");
            String line;
            while ((line = br.readLine()) != null) {
                gui.textArea.append(line + "\n");
            }
            br.close();
        } catch (Exception e) {
            System.out.println("The file is not opened");
        }
    }

    public void save() {
        if (fileName == null) {
            saveAs();
        } else {
            try {
                FileWriter fw = new FileWriter(filePath + fileName);
                gui.setTitle(fileName);
                fw.write(gui.textArea.getText());
                fw.close();

                try (PreparedStatement pstmt = db.getConn().prepareStatement(insertSQL)) {
                    pstmt.setString(1, fileName);
                    pstmt.setString(2, filePath);
                    pstmt.executeUpdate();
                    System.out.println("Record inserted into 'files' table");
                }
            } catch (Exception e) {
                System.out.println("File failed to save");
            } finally {
                populateRecent();
            }
        }
    }

    public void saveAs() {
        FileDialog fd = new FileDialog(gui, "SaveAS", FileDialog.SAVE);
        fd.setVisible(true);

        if (fd.getFile() != null) {
            fileName = fd.getFile();
            filePath = fd.getDirectory();
            gui.setTitle(fileName);
        }
        try {
            FileWriter fw = new FileWriter(filePath + fileName);
            fw.write(gui.textArea.getText());
            fw.close();

            try (PreparedStatement pstmt = db.getConn().prepareStatement(insertSQL)) {
                pstmt.setString(1, fileName);
                pstmt.setString(2, filePath);
                pstmt.executeUpdate();
                System.out.println("Record inserted into 'files' table");
            }
        } catch (Exception e) {
            System.out.println("File failed to save");
        } finally {
            populateRecent();
        }
    }

    public void close() {
        System.exit(0);
    }

    void populateRecent() {
        gui.fileRecent.removeAll(); // Clear the existing items
        if (gui.conn != null) {
            try {
                Statement stmt = gui.conn.createStatement();

                // Execute a query to get the latest 6 records ordered by ID in descending order
                String query = "SELECT name, path FROM files ORDER BY id DESC LIMIT 6";
                ResultSet rs = stmt.executeQuery(query);
                while (rs.next()) {
                    String name = rs.getString("name");
                    String path = rs.getString("path");
                    gui.recentItems = new JMenuItem(name + ": " + path);
                    gui.recentItems.setActionCommand("OpenFile:" + path + name); // Adjust the action command as needed
                    gui.recentItems.addActionListener(gui);
                    gui.fileRecent.add(gui.recentItems);
                }
                rs.close();
                stmt.close();
            } catch (Exception e) {
                System.out.println("Populating recent items failed");
            }
        }
    }
    public void clearRecent()
    {
        try {
            Statement stmt=gui.conn.createStatement();
            String query="truncate table files;";
            stmt.executeQuery(query);
            gui.fileRecent.removeAll();
        }
        catch (Exception e)
        {
            System.out.println("Recent is not cleared");
        }

    }

}
