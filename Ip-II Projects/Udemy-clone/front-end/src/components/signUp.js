import React from 'react'

function signUp() {
  return (
    <div className = "login-container">
      <div className='login-info'>
      <h1>Sign-up</h1>
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
          type="email"
          className="form__field"
          placeholder="Email"
          name="email"
          id="email"
          required
          />
        <label for="name" className="form__label">
          Email
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
        </div>

        <div className="form__group field">
        <input
          type="password"
          className="form__field"
          placeholder="Password"
          name="passwd-confirm"
          id="passwd-confirm"
          required
          />
        <label for="name" className="form__label">
          Confirm Password
        </label>
        </div>

          <button>Signup</button>
      </div>

      <div className="login-img">
        <img src="./assets/signup-image.jpg"/>
      </div>

    </div>
  )
}

export default signUp