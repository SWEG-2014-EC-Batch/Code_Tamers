import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.nio.file.*;

public class Server {
    private static final int PORT = 1234; // Port number for server

    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(PORT);
            System.out.println("Server started. Listening on port " + PORT);

            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("Client connected: " + clientSocket.getInetAddress());

                // Handle client request in a separate thread
                Thread thread = new Thread(() -> handleClientRequest(clientSocket));
                thread.start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleClientRequest(Socket clientSocket) {
        try {
            // Get input and output streams for communication with the client
            InputStream in = clientSocket.getInputStream();
            OutputStream out = clientSocket.getOutputStream();

            // Read client's request to determine upload or download
            BufferedReader reader = new BufferedReader(new InputStreamReader(in));
            String request = reader.readLine();

            if (request.equals("upload")) {
                handleUploadRequest(in);
            } else if (request.equals("download")) {
                handleDownloadRequest(out);
            } else {
                System.out.println("Invalid request: " + request);
            }

            clientSocket.close();
            System.out.println("Client disconnected: " + clientSocket.getInetAddress());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleUploadRequest(InputStream in) {
        try {
            // Read the file name from the client
            BufferedReader reader = new BufferedReader(new InputStreamReader(in));
            String fileName = reader.readLine();
            System.out.println("Receiving file: " + fileName);

            // Create a file output stream to save the uploaded file
            FileOutputStream fileOutputStream = new FileOutputStream(fileName);

            // Read file data from the client and write it to the file output stream
            byte[] buffer = new byte[8192];
            int bytesRead;
            while ((bytesRead = in.read(buffer)) != -1) {
                fileOutputStream.write(buffer, 0, bytesRead);
            }

            fileOutputStream.close();
            System.out.println("File received: " + fileName);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleDownloadRequest(OutputStream out, InputStream in) {
        try {
            // Read the file name from the client
            BufferedReader reader = new BufferedReader(new InputStreamReader(in));
            String fileName = reader.readLine();
            System.out.println("Sending file: " + fileName);

            // Check if the file exists
            File file = new File(fileName);
            if (!file.exists()) {
                System.out.println("File not found: " + fileName);
                return;
            }

            // Create a file input stream to read the file data
            FileInputStream fileInputStream = new FileInputStream(file);

            // Send the file data to the client
            byte[] buffer = new byte[8192];
            int bytesRead;
            while ((bytesRead = fileInputStream.read(buffer)) != -1) {
                out.write(buffer, 0, bytesRead);
            }

            fileInputStream.close();
            System.out.println("File sent: " + fileName);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
