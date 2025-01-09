#!/usr/bin/env python3

import os
import subprocess

# Directory containing test files
test_dir = "tests"

# List all input files
input_files = [f for f in os.listdir(test_dir) if f.endswith(".in")]

# Loop through each input file
for input_file in input_files:
    # Construct the corresponding output file name
    output_file = input_file.replace(".in", ".out")
    
    # Full paths for input and expected output
    input_path = os.path.join(test_dir, input_file)
    expected_output_path = os.path.join(test_dir, output_file)
    
    # Read the expected output
    with open(expected_output_path, 'r') as f:
        expected_output = f.read().strip()
    
    # Execute the executable and capture the output
    try:
        # Open the input file and run the executable
        with open(input_path, 'r') as input_f:
            result = subprocess.run(["./main"], stdin=input_f, capture_output=True, text=True)
        
        # Get the actual output
        actual_output = result.stdout.strip()
        
        # Compare actual output with expected output
        if actual_output == expected_output:
            print(f"Test {input_file}: PASSED")
        else:
            print(f"Test {input_file}: FAILED")
            print(f"Expected:\n{expected_output}\nActual:\n{actual_output}")
    
    except Exception as e:
        print(f"Error running test {input_file}: {e}")
