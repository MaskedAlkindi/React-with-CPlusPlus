import React from 'react';
import { Link } from 'react-router-dom';
import './home.css';

function Home() {
  return (
    <div className="home-container">
      <h1>Welcome to the Home Page</h1>
      <div className="buttons-container">
        <Link to="/Question1" className="button">Question 1</Link>
        <Link to="/Question2" className="button">Question 2</Link>
        <Link to="/Question3" className="button">Question 3</Link>
      </div>
    </div>
  );
}

export default Home;
