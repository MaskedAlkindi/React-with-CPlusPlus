import React, { useState } from 'react';
import axios from 'axios';

const Question3 = () => {
  const [inputValues, setInputValues] = useState({
    upperLimit: '',
    lowerLimit: '',
    numSubintervals: '',
  });
  const [output, setOutput] = useState('');

  const handleInputChange = (e) => {
    setInputValues({ ...inputValues, [e.target.name]: e.target.value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      const response = await axios.post('http://localhost:3005/question3', inputValues);
      setOutput(response.data);
    } catch (error) {
      console.error(error);
    }
  };

  return (
    <div>
      <h2>Question 3</h2>
      <form onSubmit={handleSubmit}>
        <div>
          <label htmlFor="upperLimit">Upper Limit a:</label>
          <input
            type="text"
            id="upperLimit"
            name="upperLimit"
            value={inputValues.upperLimit}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label htmlFor="lowerLimit">Lower Limit b:</label>
          <input
            type="text"
            id="lowerLimit"
            name="lowerLimit"
            value={inputValues.lowerLimit}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label htmlFor="numSubintervals">Number of Subintervals:</label>
          <input
            type="text"
            id="numSubintervals"
            name="numSubintervals"
            value={inputValues.numSubintervals}
            onChange={handleInputChange}
          />
        </div>
        <button type="submit">Submit</button>
      </form>
      <div>{output}</div>
    </div>
  );
};

export default Question3;
