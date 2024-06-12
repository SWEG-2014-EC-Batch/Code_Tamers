import React, { useState } from "react";
import { Link } from "react-router-dom";
import Login from "./Login";

function Navbar() {
  const [isLoginVisible, setIsLoginVisible] = useState(false);

  const handleLoginClick = () => {
    setIsLoginVisible(true);
  };
  return (
    <header>
      <nav>
        <h2>Udemy</h2>
        <ul>
          <li>
            <Link to={'/'}>Home</Link>
          </li>
          <li>
            <a href="#">About</a>
          </li>
          <li>
            <a href="#">Contact-Us</a>
          </li>
          <li>
            <Link to="/upload">Upload</Link>
          </li>
        </ul>

        <div className="account-related">
          <label>
            <i className="bx bxs-cart-alt bx-md"></i>
          </label>
          <Link to="/login">Login</Link>
          <Link to="/signup">Sign up</Link>
        </div>
      </nav>

      {isLoginVisible && <Login />}
    </header>
  );
}

export default Navbar;
