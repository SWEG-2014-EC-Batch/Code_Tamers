// App.js
import React from 'react';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import Home from './components/Home';
import Courses from './components/courses';
import Navbar from './components/Navbar';
import Footer from './components/Footer';
import Login from './components/Login';
import signUp from './components/signUp';
import Upload from './components/Upload';

function App() {
    return (
        <Router>
            <Navbar />
           <Routes>
            <Route exact path="/" element={<Home />} />
            <Route path='/login' Component={Login} />
            <Route path='/signup' Component={signUp} />
            <Route path='/upload' element={<Upload /> }/>
            <Route path='/courses' element={<Courses />}/>
           </Routes>
            <Footer />
        </Router>
    );
}

export default App;
