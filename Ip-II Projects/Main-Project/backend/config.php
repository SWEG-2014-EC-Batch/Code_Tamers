<?php

define('DB_USERNAME', 'username');
define('DB_PASSWORD', 'password');
define('DB_NAME', 'data_base');
define('DB_SERVER', '127.0.0.1');

/* Attempt to connect to MySQL database */
/** @var mysqli $mysqli */
$mysqli = new mysqli(DB_SERVER, DB_USERNAME, DB_PASSWORD, DB_NAME);


// Check connection
if($mysqli->connect_errno){
    die("ERROR: Could not connect. (" .$mysqli->connect_errno. ") " . $mysqli->connect_error);
}
