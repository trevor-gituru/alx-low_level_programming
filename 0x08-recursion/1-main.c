#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
/* 
void _print_rev_recursion(char *s){
    if (*s == '\0')
    {
        return;
    }
    s++;
    _print_rev_recursion(s);
    _putchar(*(s-1));
}
 */