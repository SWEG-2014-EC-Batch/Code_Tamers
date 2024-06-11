<?php
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

    } catch(PDOException $e) {
        echo (["error" => $e->getMessage()]);
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

    <link rel="stylesheet" href="/public/css/style.css">
    <link rel="stylesheet" href="/public/css/movie.css">
</head>
<body onload="singleMovie()">
    <nav>
        <a href="/index.php"><h1>MyMovieList</h1></a>
        <div class="search-bar">
            <input type="text" placeholder="Search For any movie" id="Input">
            <!-- <button type="submit"><i class="fa-solid fa-magnifying-glass"></i></button> -->
        </div>
        <ul>
            <li><a href="./login.html">Login</a></li>
            <li><a href="#">Signup</a></li>
        </ul>
    </nav>    

    <div class="movie-poster">
      <img src="
        <?php
           echo $movie["poster"]; 
        ?>"
      alt="Movie Poster">
  </div>
  <div class="movie-details">
      <div class="details-header">
          <div class="dh-ls">
              <h2>
                <?php
                 echo $movie["title"];
                ?>
              </h2>
          </div>

      </div>
      <span class="italics-text"><i><?php echo $movie["year"];?></span>/10 </i></span>
      
      </ul>

      <div class="content-details">
          <div class="detail-div">
              <select class="valuing" name="add-to-list" id="add-to-list">
                  <option value="" disabled selected>List</option>
                  <option value="dropped">Dropped</option>
                  <option value="on_hold">On-Hold</option>
                  <option value="planned">Planned</option>
                  <option value="watched">Watched</option>
              </select>
          </div>
      </div>
  </div>

  <div class="video-contaner">
    <video src="<?php echo $movie["video_path"]
    ?>" controls>
    </video>
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

    <script src="../scrpt.js"></script>
</body>
</html>