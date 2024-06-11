# 0x06. C - More pointers, arrays and strings
Concepts learnt:
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables
## Task 0. strcat
Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`
- **FYI:** The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.
```bash
julien@ubuntu:~/0x06$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$
``` 
## Task 1. strncat
Write a function that concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
- it will use at most `n` bytes from `src`; and
- `src` does not need to be null-terminated if it contains `n` or more bytes
- Return a pointer to the resulting string `dest`
- **FYI:** The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.
```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x06$ 
```
## Task 
## Task 
## Task 
## Task 
## Task 
## Task 
## Task 
## Task 
## Task 
## Task 
## Additional Resources
- [Practical Use of Pointers in C Programming](https://www.youtube.com/watch?v=KzLC_9VAoX0)