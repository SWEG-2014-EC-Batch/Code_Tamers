<?php

define('DB_USERNAME', 'root');
define('DB_PASSWORD', 'Jk8$#mD1fG0^');
define('DB_NAME', 'site_users');
define('DB_SERVER', '127.0.0.1');

/* Attempt to connect to MySQL database */
/** @var mysqli $mysqli */
$mysqli = new mysqli(DB_SERVER, DB_USERNAME, DB_PASSWORD, DB_NAME);


// Check connection
if($mysqli->connect_errno){
    die("ERROR: Could not connect. (" .$mysqli->connect_errno. ") " . $mysqli->connect_error);
}