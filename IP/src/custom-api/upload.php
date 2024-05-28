<?php
    require '../dbConnect.php';

    
    $database = Database::getInstance();
    $conn = $database->getConnection();
    
    session_start();

    
    if (!isset($_SESSION['admin_name'])) {
        header("Location: ../pages/admin.php");
        exit();
    }
    
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        if (!isset($_FILES['video']) || !isset($_POST['title']) || !isset($_POST['year'])) {
            echo json_encode(['response' => 'False', 'error' => 'Missing required fields']);
            exit();
        }

        $title = $_POST['title'];
        $year = $_POST['year'];
        $poster = isset($_POST['poster']) ? $_POST['poster'] : null;

        $target_dir = "uploads/";
        if (!is_dir($target_dir)) {
            mkdir($target_dir, 0777, true);
        }
        $target_file = $target_dir . basename($_FILES["video"]["name"]);
        $videoFileType = strtolower(pathinfo($target_file, PATHINFO_EXTENSION));

        // Check if file is a valid video format
        $valid_extensions = array("mp4", "avi", "mov", "mkv");
        if (!in_array($videoFileType, $valid_extensions)) {
            echo json_encode(['response' => 'False', 'error' => 'Invalid video format']);
            exit();
        }

        // Upload file
        if (move_uploaded_file($_FILES["video"]["tmp_name"], $target_file)) {
            // Insert movie metadata into the database
            $stmt = $conn->prepare("INSERT INTO movies (title, year, poster, video_path) VALUES (:title, :year, :poster, :video_path)");
            $stmt->bindParam(':title', $title);
            $stmt->bindParam(':year', $year);
            $stmt->bindParam(':poster', $poster);
            $stmt->bindParam(':video_path', $target_file);

            if ($stmt->execute()) {
                echo json_encode(['response' => 'True', 'message' => 'Movie uploaded successfully']);
            } else {
                echo json_encode(['response' => 'False', 'error' => 'Failed to save movie metadata']);
            }
        } else {
            echo json_encode(['response' => 'False', 'error' => 'Failed to upload video']);
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dashboard</title>
    
    <link rel="stylesheet" href="../public/css/style.css">
    <link rel="stylesheet" href="../public/css/dashboard.css">

    <!-- google fonts -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Acme&family=Briem+Hand:wght@100..900&family=Caveat:wght@400..700&family=Indie+Flower&family=Permanent+Marker&family=Poetsen+One&family=Satisfy&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Kalam:wght@300;400;700&display=swap" rel="stylesheet">

    <!-- boxicons -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>

    <!-- the script for confirming the removal of movie -->
    <script>
        function confirmRemoval(movieId) {
            var confirmation = confirm("Are you sure you want to remove this movie?");
            if (!confirmation) {
                // If user cancels, prevent form submission
                event.preventDefault(); // Prevent default form submission
            }
        }   
    </script>
</head>
<body>
    <nav>
        <a href="./index.php"><h1>MyMovieList</h1></a>
              
        <input type="checkbox" id="toggle-popup" class="toggle-popup">
        <label for="toggle-popup" class="user-icon"><i class='bx bxs-user bx-md'></i></label>
        <div class="profile-popup">
            <form action="./logout.php" method="post">
                <p><?php echo htmlspecialchars($_SESSION['admin_name'])?></p>
                <button>Logout</button>
            </form>
        </div>
    </nav>

    <div class="content">
        <h1>Upload Movie</h1>
        <form action="<p><?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <label for="title">Title:</label>
            <input type="text" id="title" name="title" required><br><br>
            
            <label for="year">Year:</label>
            <input type="text" id="year" name="year" required><br><br>
            
            <label for="poster">Poster URL:</label>
            <input type="text" id="poster" name="poster"><br><br>
            
            <label for="video">Video File:</label>
            <input type="file" id="video" name="video" accept="video/*" required><br><br>
            
            <button type="submit">Upload</button>
        </form>
    </div>


    <footer>
        <div class="footer-container">
            <h1>MyMovieList</h1>
            <ul>
                <li>Watch</li>
                <li>Record</li>
                <li>Aware</li>
                <li>Of what you watched</li>
            </ul>
            <div class="social-media">
                <i class='bx bxl-instagram bx-md'></i>
                <i class='bx bxl-telegram bx-md' ></i>
                <i class='bx bxl-tiktok bx-md' ></i>
            </div>
            
        </div>
    </footer>
</body>
</html>
