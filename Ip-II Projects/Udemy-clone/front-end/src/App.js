// App.js
import React from 'react';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import Home from './components/Home';

function Contact() {
    return <h1>Contact Us Page</h1>;
}

function About() {
    return <h1>About Us Page</h1>;
}

function App() {
    return <Home />;
}

export default App;
