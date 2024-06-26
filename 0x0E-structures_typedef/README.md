# 0x0E. C - Structures, typedef
Concepts learnt:
- What are structures, when, why and how to use them
- How to use `typedef`
## Tasks
### 0. Poppy
Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`
```bash
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
### 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type `struct dog`
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
```bash
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
``` 
### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a `struct dog`

- Prototype: `void print_dog(struct dog *d);`
- Format: see example bellow
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.
```bash
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
```
### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type `dog_t` as a new name for the type `struct dog`.
```bash
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
## Resources
### Mandatory
- [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240626%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240626T130846Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=f7bbdb765b494f464ab8cacb13db38b83106f915af5ad6a149400ddaa70d45d8)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240626%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240626T130856Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=97fdda1e0cfa6915551bc277ae232c1d01749e3946e3af4e0f003e84443a98d1)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- **Programming in C** by Stephen Kochan - Chapter 8, Working with Structures p163-189

### Additional
- [Structs & Typedef in C Explained](https://www.youtube.com/watch?feature=shared&v=V13CbI74WQc)
- [Practical use of structs & typedef with coding examples](https://www.youtube.com/watch?feature=shared&v=0IVfazuTHU8)
- [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)
