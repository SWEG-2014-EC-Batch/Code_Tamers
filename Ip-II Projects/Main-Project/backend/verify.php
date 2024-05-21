<?php
require_once 'config.php';

if(isset($_GET['token'])){
    $token = $_GET['token'];

    // Prepare a select statement
    $sql = "SELECT id FROM users WHERE verification_token = ? AND is_verified = 0";
    
    if($stmt = $mysqli->prepare($sql)){
        // Bind variables to the prepared statement as parameters
        $stmt->bind_param("s", $param_token);

        // Set parameters
        $param_token = $token;

        // Attempt to execute the prepared statement
        if($stmt->execute()){
            // store result
            $stmt->store_result();

            if($stmt->num_rows == 1){
                // Token is valid, update is_verified
                $sql_update = "UPDATE users SET is_verified = 1 WHERE verification_token = ?";
                
                if($stmt_update = $mysqli->prepare($sql_update)){
                    // Bind variables to the prepared statement as parameters
                    $stmt_update->bind_param("s", $param_token);

                    // Attempt to execute the prepared statement
                    if($stmt_update->execute()){
                        echo "Email verified successfully.";
                    } else{
                        echo "Failed to verify email.";
                    }
                }
                $stmt_update->close();
            } else{
                
                echo "Invalid or expired token.";
            }
        } else{
            echo "Oops! Something went wrong. Please try again later.";
        }
    }

    // Close statement
    $stmt->close();

    // Close connection
    $mysqli->close();
} else {
    echo "No verification token provided.";
}
?>
