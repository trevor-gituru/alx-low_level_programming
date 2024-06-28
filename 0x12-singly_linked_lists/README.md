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
### 1. List length
Write a function that returns the number of elements in a linked `list_t list`.
- Prototype: `size_t list_len(const list_t *h);`
```bash
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
```
### 2. Add node
Write a function that adds a new node at the beginning of a `list_t list.`

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`
```bash
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
```

## Resources
- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)
- [Google](https://www.geeksforgeeks.org/singly-linked-list-tutorial/)
- [Youtube](https://www.youtube.com/results?search_query=linked+lists)
