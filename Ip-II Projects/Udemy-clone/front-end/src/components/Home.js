import React, { Component } from 'react'

export default class Home extends Component {
  render() {
    return (
        <div className='main-content'>
        <header>
          <nav>
              <h2>Udemy</h2>
            <ul>
              <li><a href="#">Home</a></li>
              <li><a href="#">About</a></li>
              <li><a href="#">Contact-Us</a></li>
              <li><a href="#">Upload</a></li>
            </ul>
      
            <div className="account-related">
              <label><i className='bx bxs-cart-alt bx-md'></i></label>
              <a href="#">Log in</a>
              <a href="#">Sign up</a>
            </div>
          </nav>
        </header>
      
        <div className="container">
            <div className="inner">
              <img src="./assets/udemy-market.jpg" />
              <label>Marketing</label>
            </div>
      
            <div className="inner">
              <img src="./assets/udemy-images.jpg" />
              <label>Business</label>
            </div>
          
            <div className="inner">
              <img src="./assets/udemy-photogra.jpg" />
              <label>Photograyphy</label>
            </div>
          
            <div className="inner">
              <img src="./assets/udemy-it.jpg" />
              <label>It and Software</label>
            </div>
      
            <div className="inner">
              <img src="./assets/udemy-music.jpg" />
              <label>Music</label>
            </div>
          
            <div className="inner">
              <img src="./assets/udemy-design.jpg" />
              <label>Design</label>
            </div>
          
        </div>
      
        <footer>
            <div className="footer-details">
                <div className="row-detail">
                    <a href="#">udemy-Business</a>
                    <a href="#">Get the app</a>
                    <a href="#">About us</a>
                    <a href="#">Contact us</a>
                </div>
                <div className="row-detail">
                    <a href="#">Careers</a>
                    <a href="#">Blog</a>
                    <a href="#">Help and support</a>
                    <a href="#">Affiliate</a>
                </div>
                <div className="row-detail">
                    <a href="#">Terms</a>
                    <a href="#">Privacy policy</a>
                    <a href="#">Cookie settings</a>
                    <a href="#">Sitemap</a>
                </div>
                <div className="udemy-logo">
                    <h1>Udemy</h1>
                </div>
            </div>

    
        </footer>
      </div>
    )
  }
}
