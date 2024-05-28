<?php
session_start();

if (!isset($_SESSION['username'])) {
    header("Location: login.php");
    exit();
}

$apikey = '47b1fb4a';
$servername = "db";
$username = "root";
$password = "1234dbq";
$dbname = "docker_db";
$user = $_SESSION['username'];
$movies = [];

// Handle search form submission
if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET['search_query'])) {
    $search_query = urlencode($_GET['search_query']);
    $api_url = "http://www.omdbapi.com/?s={$search_query}&apikey={$apikey}";

    $response = file_get_contents($api_url);
    $data = json_decode($response, true);

    if ($data['Response'] === 'True') {
        $movies = $data['Search'];
    } else {
        $error_message = $data['Error'];
    }
}

// Handle remove from watched list form submission
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['remove']) ) {
    $movie_id = $_POST['movie_id'];

    try {
        $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        // Delete the movie from the user_movie table
        $stmt = $conn->prepare("DELETE FROM user_movie WHERE username = :username AND movie_id = :movie_id");
        $stmt->bindParam(':username', $user);
        $stmt->bindParam(':movie_id', $movie_id);
        $stmt->execute();
    } catch(PDOException $e) {
        echo "Error: " . $e->getMessage();
    }

    $conn = null;

    // Redirect to avoid resubmitting the form
    header("Location: " . $_SERVER['PHP_SELF']);
    exit();
}

// Handle add to watched list form submission
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['movie_id']) && isset($_POST['movie_title']) && !isset($_POST['remove'])) {
    $movie_id = $_POST['movie_id'];
    $movie_title = $_POST['movie_title'];

    try {
        $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        // Insert the movie details into the user_movie table
        $stmt = $conn->prepare("INSERT INTO user_movie (username, movie_id, watched_date) VALUES (:username, :movie_id, NOW())");
        $stmt->bindParam(':username', $user);
        $stmt->bindParam(':movie_id', $movie_id);
        $stmt->execute();
    } catch(PDOException $e) {
        echo "Error: " . $e->getMessage();
    }

    header("Location: " . $_SERVER['PHP_SELF']);
    exit();

    $conn = null;
}

// Fetch the list of movies watched by the user
$watched_movies = [];

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $stmt = $conn->prepare("SELECT movie_id, watched_date FROM user_movie WHERE username = :username");
    $stmt->bindParam(':username', $user);
    $stmt->execute();
    $watched_movies = $stmt->fetchAll(PDO::FETCH_ASSOC);
} catch(PDOException $e) {
    echo "Error: " . $e->getMessage();
}

$conn = null;
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
        <div class="search-bar">
            <form method="get" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
                <input type="text" name="search_query" placeholder="Add New Movie" required>
                <button type="submit">Search</button>
            </form>
        </div>
        
        <input type="checkbox" id="toggle-popup" class="toggle-popup">
        <label for="toggle-popup" class="user-icon"><i class='bx bxs-user bx-md'></i></label>
        <div class="profile-popup">        
            <p><?php echo htmlspecialchars($_SESSION['username'])?></p>
            <p><?php echo htmlspecialchars($_SESSION['email']); ?> </p>
            <form action="./logout.php" method="post">
                <button>Logout</button>
            </form>
        </div>
    </nav>

    <div class="content">
        <div class="welcome">
            <h1>Welcome, <?php echo htmlspecialchars($_SESSION['username']); ?></h1>
        </div>
        
        <!-- if we are searching for movie -->
        <div class="search-content">
            <?php if (isset($error_message)) : ?>
                <p><?php echo htmlspecialchars($error_message); ?></p>
            <?php endif; ?>
        
            <?php if (!empty($movies)) : ?>
                <h2>Search Results</h2>
                <ul>
                    <?php foreach ($movies as $movie) : ?>
                        <li>
                            <?php if (!empty($movie['Poster']) && $movie['Poster'] != 'N/A') : ?>
                                <img src="<?php echo htmlspecialchars($movie['Poster']); ?>" alt="<?php echo htmlspecialchars($movie['Title']); ?>" style="width: 80px; height: auto;">
                            <?php endif; ?>
    
                            <p><?php echo htmlspecialchars($movie['Title']); ?> (<?php echo htmlspecialchars($movie['Year']); ?>)</p>
                            
                            <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" style="display:inline;">
                                <input type="hidden" name="movie_id" value="<?php echo htmlspecialchars($movie['imdbID']); ?>">
                                <input type="hidden" name="movie_title" value="<?php echo htmlspecialchars($movie['Title']); ?>">
                                <button type="submit">Add to Watched List</button>
                            </form>
                        </li>
                    <?php endforeach; ?>
                </ul>
            <?php endif; ?>
        </div>
    
        <div class="watched-content">
            <h2>Movies You Have Watched</h2>
            <ul>
                <?php foreach ($watched_movies as $movie) : 
                    // Fetch movie details from OMDb API using movie_id
                    $movie_id = $movie['movie_id'];
                    $api_url = "http://www.omdbapi.com/?i={$movie_id}&apikey={$apikey}";
                    $response = file_get_contents($api_url);
                    $movie_details = json_decode($response, true);
                ?>
                    <li>
                        <?php if (!empty($movie_details['Poster']) && $movie_details['Poster'] != 'N/A') : ?>
                            <img src="<?php echo htmlspecialchars($movie_details['Poster']); ?>" alt="<?php echo htmlspecialchars($movie_details['Title']); ?>" style="width: 50px; height: auto;">
                        <?php endif; ?>
    
                        <p>
                            <?php echo htmlspecialchars($movie_details['Title'])?>
                        </p>
        
                        <form id="remove-form-<?php echo htmlspecialchars($movie_id); ?>" method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" style="display:inline;">
                            <input type="hidden" name="movie_id" value="<?php echo htmlspecialchars($movie_id); ?>">
                            <input type="hidden" name="remove" value="1">
                            <button type="submit" onclick="confirmRemoval('<?php echo htmlspecialchars($movie_id); ?>')">Remove from List</button>
                        </form>
                    </li>
                <?php endforeach; ?>
            </ul>
        </div>
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
