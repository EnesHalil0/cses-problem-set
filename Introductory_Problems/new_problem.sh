#!/bin/sh

if [ $# -ne 1 ]; then
  echo "Usage: ./new_problem.sh <problem_name>"
  exit 1
fi

base_path=$(pwd)
new_directory=$1
full_path=$base_path/$new_directory

mkdir -p $full_path
touch $full_path/main.cpp
cp "$base_path/.test.py" "$full_path/test.py"

comp_command="g++ -std=c++17 -Wshadow -Wall -o main main.cpp -O2 -Wno-unused-result"
makefile=$(printf "default:\n\t$comp_command\n\ntest:\n\tpython3 test.py")

echo "$makefile" > $full_path/Makefile
