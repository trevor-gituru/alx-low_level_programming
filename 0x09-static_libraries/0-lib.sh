#!/bin/bash

# Array containing paths to C source files
files=(
    "../0x02-functions_nested_loops/_putchar.c"
    "../0x02-functions_nested_loops/3-islower.c"
    "../0x02-functions_nested_loops/4-isalpha.c"
    "../0x02-functions_nested_loops/6-abs.c"
    "../0x04-more_functions_nested_loops/0-isupper.c"
    "../0x04-more_functions_nested_loops/1-isdigit.c"
    "../0x05-pointers_arrays_strings/2-strlen.c"
    "../0x05-pointers_arrays_strings/3-puts.c"
    "../0x05-pointers_arrays_strings/9-strcpy.c"
    "../0x05-pointers_arrays_strings/100-atoi.c"
    "../0x06-pointers_arrays_strings/0-strcat.c"
    "../0x06-pointers_arrays_strings/1-strncat.c"
    "../0x06-pointers_arrays_strings/2-strncpy.c"
    "../0x06-pointers_arrays_strings/3-strcmp.c"
    "../0x07-pointers_arrays_strings/0-memset.c"
    "../0x07-pointers_arrays_strings/1-memcpy.c"
    "../0x07-pointers_arrays_strings/2-strchr.c"
    "../0x07-pointers_arrays_strings/3-strspn.c"
    "../0x07-pointers_arrays_strings/4-strpbrk.c"
    "../0x07-pointers_arrays_strings/5-strstr.c"
)

# Compile each C file into corresponding .o files
for file in "${files[@]}"; do
# -f checks if regular file exist
    if [ -f "$file" ]; then
        # Extract the file name using basename
        file_name=$(basename "$file")
        gcc -c "$file" -o obj/"${file_name%.c}.o"        
        echo "Source File: $file_name compiled" 
    else
        echo "File $file not found."
        exit 1
    fi
done

# Create a static library from object files
ar rcs libmy.a obj/*.o

# Check if library created
if [ $? -eq 0 ]; then
    echo -e "\nStatic library created successfully and its contents are as follows: "
    ar -t libmy.a
    echo -e "\n Its symbols are as follows"
    nm libmy.a
else
    echo "Failed to create static library."
    exit 1
fi
