import React, { useState } from 'react';
import axios from 'axios';

const Question1 = () => {
  const [inputValues, setInputValues] = useState({
    tolerance: '',
    initial: '',
    second: '',
    initialSecant: '',
    secondSecant: '',
    maxIterations: '',
  });
  const [output, setOutput] = useState('');

  const handleInputChange = (e) => {
    setInputValues({ ...inputValues, [e.target.name]: e.target.value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      const response = await axios.post('http://localhost:3005/question1', inputValues);
      setOutput(response.data);
    } catch (error) {
      console.error(error);
    }
  };

  return (
    <div>
      <form onSubmit={handleSubmit}>
        <div className="input-container">
          <label htmlFor="tolerance">Tolerance/Error:</label>
          <input
            type="text"
            id="tolerance"
            name="tolerance"
            value={inputValues.tolerance}
            onChange={handleInputChange}
          />
        </div>
        <div className="input-container">
          <label htmlFor="initial">Initial guess:</label>
          <input
            type="text"
            id="initial"
            name="initial"
            value={inputValues.initial}
            onChange={handleInputChange}
          />
        </div>
        <div className="input-container">
          <label htmlFor="second">Second guess:</label>
          <input
            type="text"
            id="second"
            name="second"
            value={inputValues.second}
            onChange={handleInputChange}
          />
        </div>
        <button type="submit" className="submit-button">
          Submit
        </button>
      </form>
      <div className="output-container">
        <label>Output:</label>
        <div className="output">{output}</div>
      </div>
    </div>
  );
};

export default Question1;
