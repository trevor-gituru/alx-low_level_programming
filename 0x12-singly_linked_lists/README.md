# 0x12. C - Singly linked lists

## Tasks
### 0. Print list
Write a function that prints all the elements of a `list_t list`.
- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- Format: see example
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`
```bash
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
```

## Resources
- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)
- [Google](https://www.geeksforgeeks.org/singly-linked-list-tutorial/)
- [Youtube](https://www.youtube.com/results?search_query=linked+lists)
