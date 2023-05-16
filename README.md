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
```bash
npm install 
```
This will install the nesscary depencices for the react file.

Youll have to change the following: 

1. The file path to your complied C++ Program in the file 'server.js" the path that was used is mine youll have to change it to yours. 


##To Run the Program 
### instrcutions 
1. Redirect to your react directory using cmd and run 
```bash
npm start
```

5. Redirect to node.js using cmd and run
```bash
node server.js
```
### Make sure of the following:
1.Make sure to have react running in port 3000 and node.js running in port 3005, you can change this as much as you want but make sure     to change the code to whatever changes you made.
2. The file paths to your complied C++ Programs in the file 'server.js" the path that was used is mine youll have to change it to yours. 



# Compling new C++ files or making changes. 
if you wish to compile new C++ files, make the C++ code in .cpp format and make sure it accepts arugments, then use cmd 
and redirect to the directory that C++ exists in and run the following command: 
```bash
g++ FileName.cpp -o Filename 
```

this will compile the C++ and turn it into Filename.exe


# Example of Compling 

i Made changes to TheFirst.cpp, now ill run the following command:


then i am going run to complie into a exe file 
```bash
g++ TheFirst.cpp -o methods
```
thefirstmethid.cpp will become methods.exe 

i can test if its working by running the following CMD Command: 
```bash
methods.exe 0 3 0.0001
```
Note this customized based on my code and my code accepts 3 arugments which are 0 3 0.0001
as the following format: 
```bash
program_name initial_guess_1 initial_guess_2 tolerable_error
```

After i ran methods.exe, i got the following output in cmd:
bisection's Method
x0= 0.0000     x1= 3.0000     x= 1.5000      f(x)= 11.7729
x0= 1.5000     x1= 3.0000     x= 2.2500      f(x)= -5.5240
x0= 1.5000     x1= 2.2500     x= 1.8750      f(x)= 3.5991
x0= 1.8750     x1= 2.2500     x= 2.0625      f(x)= -0.8636
x0= 1.8750     x1= 2.0625     x= 1.9688      f(x)= 1.3950
x0= 1.9688     x1= 2.0625     x= 2.0156      f(x)= 0.2722
x0= 2.0156     x1= 2.0625     x= 2.0391      f(x)= -0.2941
x0= 2.0156     x1= 2.0391     x= 2.0273      f(x)= -0.0106
x0= 2.0156     x1= 2.0273     x= 2.0215      f(x)= 0.1309
x0= 2.0215     x1= 2.0273     x= 2.0244      f(x)= 0.0602
x0= 2.0244     x1= 2.0273     x= 2.0259      f(x)= 0.0248
x0= 2.0259     x1= 2.0273     x= 2.0266      f(x)= 0.0071
x0= 2.0266     x1= 2.0273     x= 2.0270      f(x)= -0.0017
x0= 2.0266     x1= 2.0270     x= 2.0268      f(x)= 0.0027
x0= 2.0268     x1= 2.0270     x= 2.0269      f(x)= 0.0005
x0= 2.0269     x1= 2.0270     x= 2.0269      f(x)= -0.0006
x0= 2.0269     x1= 2.0269     x= 2.0269      f(x)= -0.0001

Root of the equation is: 2.0269
Iterations number: 17
Secant's Method
x0= 0.0000     x1= 3.0000     x2= 1.5916     f(x2)= 9.8821
x0= 3.0000     x1= 1.5916     x2= 1.9866     f(x2)= 0.9695
x0= 1.5916     x1= 1.9866     x2= 2.0295     f(x2)= -0.0639
x0= 1.9866     x1= 2.0295     x2= 2.0269     f(x2)= 0.0003
x0= 2.0295     x1= 2.0269     x2= 2.0269     f(x2)= -0.0000

Root of the equation is: 2.0269
Iterations number: 5
Newton's Method
Iteration-1:     x = 2.0610 and f(x) = -0.8278
Iteration-2:     x = 2.0270 and f(x) = -0.0033
Iteration-3:     x = 2.0269 and f(x) = -0.0000

Root is: 2.0269

Which indeed was my soultion to the mathmatical question



Enojy :) ~MaskedAlkindi























