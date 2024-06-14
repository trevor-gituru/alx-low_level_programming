# 0x0C. C - More malloc, free
Concepts learnt:
- How to use the `exit` function
- What are the functions `calloc` and `realloc` from the standard library and how to use them

## Task 0. Trust no one
Write a function that allocates memory using `malloc`.

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- if malloc fails, the `malloc_checked` function should cause normal process termination with a status value of `98`
```bash
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
julien@ubuntu:~/0x0b. more malloc, free$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
julien@ubuntu:~/0x0b. more malloc, free$ echo $?
98
julien@ubuntu:~/0x0b. more malloc, free$ 
```
## Task 1. string_nconcat
Write a function that concatenates two strings.
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
- If the function fails, it should return `NULL`
- If `n` is greater or equal to the length of `s2` then use the entire string `s2`
- if `NULL` is passed, treat it as an empty string
```bash
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
julien@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
Best School
julien@ubuntu:~/0x0b. more malloc, free$ 
```
## Task 2. _calloc
Write a function that allocates memory for an array, using `malloc`.
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb` elements of size `bytes` each and returns a pointer to the allocated memory.
- The memory is set to `zero`
- If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
- If `malloc` fails, then `_calloc` returns `NULL`
- **FYI:** The standard library provides a different function: `calloc`. Run `man calloc` to learn more.

```bash
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
julien@ubuntu:~/0x0b. more malloc, free$ ./2-calloc
0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
julien@ubuntu:~/0x0b. more malloc, free$ 
```
## Task 
## Resources
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/should-i-cast-the-result-of-malloc-in-c)
## Additional Resources
- [Practical use of MALLOC in C - Dynamic Memory Allocation](https://www.youtube.com/watch?v=OUdpPq07yPU)