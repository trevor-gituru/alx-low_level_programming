# 0x01. C - Variables, if, else, while
Concepts learnt:
- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the `if`, `if ... else` statements
- How to use comments
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- How to print variables using `printf`
- What is the `ASCII` character set
- What are the purpose of the `gcc` flags `-m32` and `-m64`

## Task 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed.The output of the program should be the number, followed by:
1. if the number is greater than 0: is positive
2. if the number is 0: is zero
3. if the number is less than 0: is negative
- followed by a new line
## Task 1. The last digit
This program will assign a random number to the variable n each time it is executed. The output of the program is: 
- The string "Last digit of," followed by
- n, followed by.
- the string "is," followed by:
	* if the last digit of n is greater than 5: the string "and is greater than 5"
	* if the last digit of n is 0: the string "and is 0"
	* if the last digit of n is less than 6 and not 0: the string "and is less than 6 and not 0"
## Task 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
A program that prints the alphabet in lowercase, followed by a new line.
- Only using the putchar function (every other function (printf, puts, etc) is forbidden)
- All the code should be in the main function
- Only use putchar twice in your code

## Task 3. alphABET
A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- Only use the putchar function (every other function (printf, puts, etx) is forbidden)
- All your code should be in the main function
- You can only use putchar three times in your code

## Task 4. When I was having that alphabet soup, I never thought that it would pay off
A program that prints the alphabet in lowercase, followed by a new line.
- Print all the letters except q and e.
- Only using the putchar function (every other function (printf, puts, etc) is forbidden)
- All the code should be in the main function
- You can only use putchar twice in your code

## Task 5. Numbers
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- All the code should be in the main function

## Task 6. Numberz
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- Without using any variable of type char
- Only using the putchar function (every other function (printf, puts, etc) is forbidden)
- Only using putchar twice in your code

## Task 7. Smile in the mirror
A program that prints the lowercase alphabet in reverse, followed by a new line.
- Only using the putchar function (every other function (printf, puts, etc) is forbidden)
- All the code should be in the main function
- Only using putchar twice in your code

## Task 8 - Hexadeximal
A program that prints all the numbers of base 16 in lowercase, followed by a new line.
- Only using the putchar function (every other function (printf, puts, etc) is forbidden)
- All the code should be in the main function
- Only using putchar three times in your code

## Task 8- . Patience, persistence and perspiration make an unbeatable combination for success
A program that prints all possible combinations of single-digit numbers.
- Numbers must be separated by `,` , followed by a space
- Numbers should be printed in ascending order
- Only use the putchar function (every other function (printf, puts, etc) is forbidden)
- All your code should be in the main function
- Only use putchar four times maximum in your code
- Without using any variable of type char

## Task 10 - Inventing is a combination of brains and materials. The more brains you use, the less material you need
A program that prints all possible different combinations of two digits.
- Numbers must be separated by `,` , followed by a space
- The two digits must be different
- 01 and 10 are considered the same combination of the two digits 0 and 1
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the putchar function (every other function (printf, puts, etc) is forbidden)
- You can only use putchar five times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

## Task 11- The success combination in business is: Do what you do better... and: do more of what you do...
A program that prints all possible different combinations of three digits.
- Numbers must be separated by ',', followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the putchar function (every other function (printf, puts, etc) is forbidden)
- You can only use putchar six times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

## Task 12 - Software is eating the World
A program that prints all possible combinations of two two-digit numbers.
- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. 1 should be printed as 01
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- '00 01' and '01 00' are considered as the same combination of the numbers 0 and 1
- You can only use the 'putchar' function (every other function (printf, puts, etc) is forbidden)
- You can only use 'putchar' eight times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

## Resources
- [Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240604%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240604T140757Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=463fdbad1367571c5073aef312e7b59a222ea8f159fc15f9a905ea2988abf2c2)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C]()https://www.cprogramming.com/tutorial/c/lesson2.html
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)
## Additional Resources
- [Introduction to C (Basic structure and variables)](https://www.youtube.com/watch?v=LM6IjCbtpZA)