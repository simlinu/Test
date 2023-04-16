#!/bin/bash


### Variables

program_files=("main.cpp" "Tree.cpp")
executable_file="main"
input_file="input.txt"
output_file="output.txt"
correct_output="result.txt"



### Script Code

# Compiles and Executes the Program
g++ -o $executable_file -fsanitize=address -Wall -std=c++14 ${program_files[*]}
./$executable_file > $output_file

# Checks if Output is Correct
if cmp --silent $output_file $correct_output; then
    echo "Correct" 
else
    echo "Failed"
fi
