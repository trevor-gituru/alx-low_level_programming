# 0x10. C - Variadic functions

## Tasks
### 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`
```bash
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
```
### 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between numbers
- and `n` is the number of integers passed to the function
- You are allowed to use `printf`
- If separator is `NULL`, don’t print it
- Print a new line at the end of your function
```bash
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```
### 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between the strings
- and `n` is the number of strings passed to the function
- You are allowed to use `printf`
- If `separator` is `NULL`, don’t print it
- If one of the string is `NULL`, print `(nil)` instead
- Print a new line at the end of your function
```bash
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
```
### 
## Resources
### Mandatory
- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)
### Additional
- [Variadic Functions in C Programming](https://www.youtube.com/watch?feature=shared&v=Lh7xydr8zzU)