# React-with-CPlusPlus

This project is a simple yet effective application that solves several mathematical 
problems using C++. React is utilized for crafting an intuitive user interface.

The project operates in the following manner:

The React Frontend comprises three pages corresponding to three distinct mathematical problems. 
Each page features a set of input fields and a 'Submit' button. Upon the user's submission of a form, 
the inputs are transmitted to a Node.js server. This server then processes the inputs and executes a 
command in the command line interface (CLI). The commands that are executed correspond to the compiled 
C++ files. The output is subsequently returned to the Node.js server, then relayed to the React application, 
and finally displayed to the user.

## Getting Started

These instructions will provide you with a copy of the project 
that you can run on your local machine for development and testing purposes.

The Math Questions Solved: 
You can view a pdf that contains the questions in Problem/Questions.pdf

### Prerequisites

To get this project up and running, you'll need to have the following installed:

1. **Node.js and npm**: Node.js is a JavaScript runtime that we'll use to run our backend server, and npm is a package manager for JavaScript. You can download both from [here](https://nodejs.org/en/download/).

2. **React**: You can install React by following the instructions (https://reactjs.org/docs/getting-started.html).

3. **C++ Compiler**: This will depend on your operating system. For Windows, you can use MinGW. For Mac, 
4. you can use Xcode Command Line Tools. For Linux, you can use g++. Instructions for installing these can be found online.

After installing the above, clone the repository to your local machine:

git clone https://github.com/MaskedAlkindi/React-with-CPlusPlus.git

redirect to the react directory named "nummericalhw" and run the following command 

npm install 

This will install the nesscary depencices for the react file.

Youll have to change the following: 

1. The file path to your complied C++ Program in the file 'server.js" the path that was used is mine youll have to change it to yours. 


##To Run the Program 
### instrcutions 
1. Redirect to your react directory using cmd and run " npm start " 
2. Redirect to node.js using cmd and run " node server.js"

### Make sure of the following:
1.Make sure to have react running in port 3000 and node.js running in port 3005, you can change this as much as you want but make sure     to change the code to whatever changes you made.
2. The file paths to your complied C++ Programs in the file 'server.js" the path that was used is mine youll have to change it to yours. 









