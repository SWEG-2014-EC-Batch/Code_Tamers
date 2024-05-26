package org.example;
import java.sql.*;


public class dbManager
{
    private Connection conn;
        public dbManager()
        {
            try{
                // Database credentials
                String url = "jdbc:mariadb://localhost/text_editor";
                String user = "END";
                String password = "1234";
                conn = DriverManager.getConnection(url, user, password);
            }
            catch (Exception e)
            {
                System.out.println("The Database is not connected");
            }
            try{
                if (conn != null) {
                    System.out.println("Connected to the database");

                    // Create the files table
                    String createTableSQL = """
                            CREATE TABLE IF NOT EXISTS files (
                             id INT PRIMARY KEY AUTO_INCREMENT,
                             name TEXT,
                             path TEXT
                            );""";

                    try (Statement stmt = conn.createStatement()) {
                        stmt.execute(createTableSQL);
                        System.out.println("Table 'files' created (if not exists)");
                    }
                }
            } catch (SQLException e) {
                System.err.println("Error: " + e.getMessage());
            }
        }
        public Connection getConn()
        {
            return conn;
        }
}
