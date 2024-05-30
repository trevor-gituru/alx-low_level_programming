#!/bin/bash

# Check if the source file arguent is provided
if [ "$#" -ne 1 ]; then
	echo "Usage: $0 <source_file.c>"
	exit 1
fi

# Assign soutce file to a variable
SOURCE_FILE=$1

# Get name of file
OUTPUT_FILE="${SOURCE_FILE%.c}.out"

#Compile source file with specified flags & output as 'exe'
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 _putchar.c  "$1"* -o "_$1" 

# Check if compilation was successf
if [ $? -eq 0 ]; then
	echo "Compilation was succesful, Executable file _$1 created"
	./"_$1"
else
	echo "Compilaton failed."
fi
