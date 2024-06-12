#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

/* int find_prime(int n, int check)
{
    if ((n == check) || (check > (n / 2)))
    {
        return 1;
    }
    if (n % check == 0)
    {
        return 0;
    }
    return find_prime(n, ++check);
}
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    return find_prime(n, 2);
    
} */