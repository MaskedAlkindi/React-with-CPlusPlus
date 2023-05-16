const express = require('express');
const { exec } = require('child_process');
const cors = require('cors');

const app = express();
app.use(express.json());
app.use(cors());

app.post('/question1', (req, res) => {
  const { tolerance, initial, second } = req.body;
  const command = `C:\\Users\\Hajid\\Documents\\Num_Assigment\\Compling\\Question1\\methods.exe ${initial} ${second} ${tolerance}`;
  console.log(command);
  exec(command, { maxBuffer: 1024 * 1024 * 5 }, (error, stdout, stderr) => {
    if (error) {
      console.error(`Error executing command: ${error}`);
      res.status(500).send('An error occurred');
    } else {
      console.log(`Command output: ${stdout}`);
      res.send(stdout);
    }
  });
});

app.post('/question2', (req, res) => {
  const { x, x0, x1 } = req.body;
  const command = `C:\\Users\\Hajid\\Documents\\Num_Assigment\\Compling\\Compliedsoftware\\Question2.exe ${x0} ${x1} ${x}`;
  console.log(command);
  exec(command, { maxBuffer: 1024 * 1024 * 5 }, (error, stdout, stderr) => {
    if (error) {
      console.error(`Error executing command: ${error}`);
      res.status(500).send('An error occurred');
    } else {
      console.log(`Command output: ${stdout}`);
      res.send(stdout);
    }
  });
});

app.post('/question3', (req, res) => {
  const { upperLimit, lowerLimit, numSubintervals } = req.body;
  const command = `C:\\Users\\Hajid\\Documents\\Num_Assigment\\Compling\\Question3\\Question3.exe "${upperLimit}" "${lowerLimit}" "${numSubintervals}"`;
  console.log(command);
  exec(command, { maxBuffer: 1024 * 1024 * 5 }, (error, stdout, stderr) => {
    if (error) {
      console.error(`Error executing command: ${error}`);
      res.status(500).send('An error occurred');
    } else {
      console.log(`Command output: ${stdout}`);
      res.send(stdout);
    }
  });
});

app.listen(3005, () => {
  console.log('Server is running on port 3005');
});
