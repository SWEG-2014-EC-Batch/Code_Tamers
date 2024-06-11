<?php
header('Content-Type: application/json');
session_start();

if (!isset($_SESSION['username'])) {
    echo json_encode(["error" => "User not logged in"]);
    exit();
}

$servername = "localhost";
$username = "END";
$password = "1234";
$dbname = "movieDb";

if (isset($_GET['id'])) {
    $id = intval($_GET['id']);

    try {
        $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        $stmt = $conn->prepare("SELECT * FROM movies WHERE id = :id");
        $stmt->bindParam(':id', $id);
        $stmt->execute();
        $movie = $stmt->fetch(PDO::FETCH_ASSOC);

        echo json_encode($movie);
    } catch(PDOException $e) {
        echo json_encode(["error" => $e->getMessage()]);
    }

    $conn = null;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>