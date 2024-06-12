# 0x08. C - Recursion
Concepts learnt:
- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn’t implement recursion

## Task 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.
- Prototype: `void _puts_recursion(char *s);`
- FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.
```bash
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
```
## Task 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.
- Prototype: `void _print_rev_recursion(char *s);`
```bash
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
```
## Task 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.
- Prototype: int _strlen_recursion(char *s);
- **FYI:** The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.
```bash
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
```
## Task 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.
- Prototype: `int factorial(int n);`
- If `n` is lower than `0`, the function should return `-1` to indicate an error
- Factorial of `0` is `1`
```bash
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
```
## Task 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of x raised to the power of y.
- Prototype: `int _pow_recursion(int x, int y);`
- If `y` is lower than `0`, the function should return `-1`
- **FYI:** The standard library provides a different function: `pow`. Run `man pow` to learn more.
```bash
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$ 
```
## Task 
## Task 

## Resources
- [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240612%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240612T090137Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ad9b6eb3e72a1c6907ccf8cbf5f1b7d7a497008e2cc1caac8c163d124d25823d)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)
## Additional Resources
- [Recursion & Recursive functions in C Programming](https://www.youtube.com/watch?feature=shared&v=0BtTPJOLPj0)
