# 0x04. C - More functions, more nested loops
Concepts learnt:
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags `-Wall` `-Werror` `-pedantic` `-Wextra` `-std=gnu89`
- What are header files and how to to use them with '#include'
  
## Task 0. isupper
Write a function that checks for uppercase character.
- Prototype: int `_isupper(int c);`
- Returns `1` if `c` is uppercase
- Returns `0` otherwise
**FYI:** The standard library provides a similar function: `isupper`. Run man `isupper` to learn more.

## Task 1. isdigit
Write a function that checks for a digit (`0` through `9`).
- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit
- Returns `0` otherwise
**FYI:** The standard library provides a similar function: `isdigit.` Run `man isdigit` to learn more.
## Task 2. Collaboration is multiplication
Write a function that multiplies two integers.
- Prototype: `int mul(int a, int b);`
## Task 3. The numbers speak for themselves
Write a function that prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_numbers(void);`
- You can only use `_putchar` twice in your code
## Task 4. I believe in numbers and signs
Write a function that prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_most_numbers(void);`
- Do not print `2` and `4`
- You can only use `_putchar` twice in your code
## Task 5. Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
- Prototype: `void more_numbers(void);`
- You can only use `_putchar` three times in your code
## Task 6. The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.
- Prototype: `void print_line(int n);`
- You can only use `_putchar` function to print
- Where `n` is the number of times the character `_` should be printed
- The line should end with a `\n`
- If `n` is `0` or less, the function should only print `\n`
## Task 7. I feel like I am diagonally parked in a parallel universe
Write a function that draws a diagonal line on the terminal.
- Prototype: `void print_diagonal(int n);`
- You can only use `_putchar` function to print
- Where `n` is the number of times the character `\` should be printed
- The diagonal should end with a `\n`
- If `n` is `0` or less, the function should only print a `\n`
## Task 8. You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.
- Prototype: `void print_square(int size);`
- You can only use `_putchar` function to print
- Where `size` is the size of the square
- If `size` is `0` or less, the function should print only a new line
- Use the character `#` to print the square
## Task 9. Fizz-Buzz
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

- Each number or word should be separated by a space
- You are allowed to use the standard library
## Task 10. Triangles
Write a function that prints a triangle, followed by a new line.
- Prototype: `void print_triangle(int size);`
- You can only use `_putchar` function to print
- Where `size` is the size of the triangle
- If `size` is `0` or less, the function should print only a new line
- Use the character `#` to print the triangle
```bash
  julien@ubuntu:~/0x04$ cat 10-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
```
## Task 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
- You are allowed to use the standard library
- Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`
## Task 12. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.
- Prototype: `void print_number(int n);`
- You can only use `_putchar` function to print
- You are not allowed to use `long`
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values
## Usage
```bash
julien@ubuntu:~/0x04$ ./run.sh <Task-number>
```
## Resources
- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06) (stop at 14:00)](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files (stop before the “Once-Only Headers” paragraph)](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
  
