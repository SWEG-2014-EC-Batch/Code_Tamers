<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>

    <link rel="stylesheet" href="./style.css">
    <link rel="stylesheet" href="./movie.css">
</head>
<body onload="singleMovie()">
    <nav>
        <a href="./index.html"><h1>MyMovieList</h1></a>
        <div class="search-bar">
            <input type="text" placeholder="Search For any movie" id="Input">
            <!-- <button type="submit"><i class="fa-solid fa-magnifying-glass"></i></button> -->
        </div>
        <ul>
            <li><a href="./login.html">Login</a></li>
            <li><a href="#">Signup</a></li>
        </ul>
    </nav>    

    <div class="fav-container">
        <!-- Items are displayed here -->
    </div>

    <!--Main Content Container-->
    <div class="main">
        <div class="movie-container">
            <!-- Movie details are displayed here-->
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

    <script src="../scrpt.js"></script>
</body>
</html>