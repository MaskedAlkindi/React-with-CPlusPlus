import React, { useState } from 'react';
import axios from 'axios';

const Question2 = () => {
  const [inputValues, setInputValues] = useState({
    x: '',
    x0: '',
    x1: '',
  });
  const [output, setOutput] = useState('');

  const handleInputChange = (e) => {
    setInputValues({ ...inputValues, [e.target.name]: e.target.value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      const response = await axios.post('http://localhost:3005/question2', inputValues);
      setOutput(response.data);
    } catch (error) {
      console.error(error);
    }
  };

  return (
    <div>
      <h2>Question 2</h2>
      <form onSubmit={handleSubmit}>
        <div>
          <label htmlFor="x">x</label>
          <input
            type="text"
            id="x"
            name="x"
            value={inputValues.x}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label htmlFor="x0">x1</label>
          <input
            type="text"
            id="x0"
            name="x0"
            value={inputValues.x0}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label htmlFor="x1">Number of x1:</label>
          <input
            type="text"
            id="x1"
            name="x1"
            value={inputValues.x1}
            onChange={handleInputChange}
          />
        </div>
        <button type="submit">Submit</button>
      </form>
      <div>{output}</div>
    </div>
  );
};

export default Question2;
