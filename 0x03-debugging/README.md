# 0x03. C - Debugging
Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become
a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or 
built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.
Concepts learnt:
- What is debugging
- What are some methods of debugging manually
- How to read the error messages
# Task 0. Multiple mains
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
```bash
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$
```
# Task
# Task
## Resources
- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)
