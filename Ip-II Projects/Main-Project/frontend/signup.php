<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sign Up</title>

    <link rel="stylesheet" href="./assets/login.css">
    <link rel="stylesheet" href="./assets/style.css">

    <!-- google fonts -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Acme&family=Briem+Hand:wght@100..900&family=Caveat:wght@400..700&family=Indie+Flower&family=Permanent+Marker&family=Poetsen+One&family=Satisfy&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Kalam:wght@300;400;700&display=swap" rel="stylesheet">

    <!-- boxicon -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
</head>
<body>
    <nav>
        <a href="./index.html"><h1>MyMovieList</h1></a>
        <ul>
            <li><a href="./login2.php">Login</a></li>
            <li><a href="./signup.php">Signup</a></li>
        </ul>
    </nav>
    <form action="../backend/register.php" method="post">
    <div class="login-container">
        <div class='login-info'>
        <h1>Sign-up</h1>
        <?php
        if(isset($_GET["username_err"])){
              echo "<span class=\"error\">".$_GET["username_err"]."</span>";
              unset($_GET["username_err"]);
        }
        ?>
        <!-- Display error messages -->
        <?php if (!empty($username_err)): ?>
            <div class="error"><?php echo $username_err; ?></div>
        <?php endif; ?>
        <div class="form__group field">
          <input
            type="text"
            class="form__field"
            placeholder="Name"
            name="username"
            id="name"
            required
          />
          <label for="name" class="form__label">
            User Name
          </label>
          </div>
  
          <?php if (!empty($email_err)): ?>
            <div class="error"><?php echo $email_err; ?></div>
        <?php endif; ?>
          <div class="form__group field">
          <input
            type="email"
            class="form__field"
            placeholder="Email"
            name="email"
            id="email"
            required
            />
          <label for="name" class="form__label">
            Email
          </label>
          </div>
          
          <?php if (!empty($password_err)): ?>
            <div class="error"><?php echo $password_err; ?></div>
        <?php endif; ?>
          <div class="form__group field">
          <input
            type="password"
            class="form__field"
            placeholder="Password"
            name="password"
            id="passwd"
            required
            />
          <label for="name" class="form__label">
            Password
          </label>
          </div>
  
          <?php if (!empty($confirm_password_err)): ?>
            <div class="error"><?php echo $confirm_password_err; ?></div>
        <?php endif; ?>
          <div class="form__group field">
          <input
            type="password"
            class="form__field"
            placeholder="Password"
            name="confirm_password"
            id="passwd-confirm"
            required
            />
          <label for="name" class="form__label">
            Confirm Password
          </label>
          </div>
  
            <button type = "submit">Signup</button>
        </div>
  
        <div class="login-img">
          <img src="images/movie_watch.jpg" alt="Description of the image"/>
        </div>
    </div>
  </form>

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
