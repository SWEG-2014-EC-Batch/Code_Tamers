// Login.js (Login component)
import React from "react";

function Login() {
  // Your login form logic here
  return (
    <div className = "login-container">
      <div className="login-info">
      <h1>Login</h1>
      <div className="form__group field">
        <input
          type="text"
          className="form__field"
          placeholder="Name"
          name="name"
          id="name"
          required
        />
        <label for="name" className="form__label">
          User Name
        </label>
        </div>

        
        <div className="form__group field">
        <input
          type="password"
          className="form__field"
          placeholder="Password"
          name="passwd"
          id="passwd"
          required
          />
        <label for="name" className="form__label">
          Password
        </label>
        
          <button>Login</button>
        </div>
      </div>

      <div className="login-img">
        <img src="./assets/signin-image.jpg"/>
      </div>

    </div>
        
  );
}

export default Login;
