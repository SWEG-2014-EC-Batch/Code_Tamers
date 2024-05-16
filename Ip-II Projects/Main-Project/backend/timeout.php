<?php
session_start();

$inactiveTime = 900; // 15 minutes (900 seconds)
function checkInactivity($inactiveTime) {
    if (isset($_SESSION['timeout'])) {
        $sessionLife = time() - $_SESSION['timeout'];

        if ($sessionLife > $inactiveTime) {
            session_unset();
            session_destroy();
            header("Location: login.php");
            exit();
        }
    }
    $_SESSION['timeout'] = time(); // Update timeout
}

checkInactivity($inactiveTime);
?>
