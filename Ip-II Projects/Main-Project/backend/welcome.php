<?php

session_start();

// If session variable is not set it will redirect to login page
if(isset($_SESSION['username']) and !empty($_SESSION['username'])){
    header("location:../frontend/movie.html");
    exit;
}
