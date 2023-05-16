'''
# main.py
from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware
import subprocess

app = FastAPI()
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # Allows all origins
    allow_credentials=True,
    allow_methods=["*"],  # Allows all methods
    allow_headers=["*"],  # Allows all headers
)

@app.post("/calculate")
async def calculate(num1: float, num2: float):
    try:
        process = subprocess.Popen(
            ["g++", "-o", "calculation", "calculation.cpp"], 
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
        _, compile_error = process.communicate()
        if compile_error:
            return {"error": compile_error.decode("utf-8")}
        
        process = subprocess.Popen(
            ["C:/Users/Hajid/Documents/Num_Assigment/Compling/calculation.exe", str(num1), str(num2)], 
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
        stdout, stderr = process.communicate()

        if stderr:
            return {"error": stderr.decode("utf-8")}
        
        return {"result": float(stdout)}
    
    except Exception as e:
        return {"error": str(e)}

'''
import subprocess
import os

# Define the command you want to execute
command = r"C:\Users\Hajid\Documents\Num_Assigment\Compling\calculation.exe 1.0 2.7"

cmd = subprocess.Popen(command, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)

out, err = cmd.communicate()

# Check if there were any errors
if cmd.returncode != 0:
    print(f"Error occurred: {err.decode('utf-8')}")
else:
    # If no errors, print the output
    string = out.decode('utf-8')
    print(string)


    
