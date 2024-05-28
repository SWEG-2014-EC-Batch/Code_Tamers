<?php
    require 'db.php';

    if (!isset($_GET['query'])) {
        echo json_encode(['response' => 'False', 'error' => 'No search query provided']);
        exit();
    }

    $query = '%' . strtolower($_GET['query']) . '%';
    $stmt = $conn->prepare("SELECT * FROM movies WHERE LOWER(title) LIKE :query");
    $stmt->bindParam(':query', $query);
    $stmt->execute();
    $results = $stmt->fetchAll(PDO::FETCH_ASSOC);

    if (empty($results)) {
        echo json_encode(['response' => 'False', 'error' => 'No movies found']);
    } else {
        echo json_encode(['response' => 'True', 'results' => $results]);
    }
?>
