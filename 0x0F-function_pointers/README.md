# 0x0F. C - Function pointers
Concepts learnt:
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory


## Tasks
### 0. What's my name
Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`
```bash
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$ 
```

### 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- where `size` is the size of the array
- and `action` is a pointer to the function you need to use
```bash
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$ 
```
## Resources
### Mandatory
- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s&feature=youtu.be)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

### Additional
- [Function pointers in C Programming & How to use them](https://www.youtube.com/watch?feature=shared&v=ztMTOPM4ViU)