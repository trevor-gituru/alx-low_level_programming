#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Dynamic allocation of 1D string array*/
int main(void)
{
    char *a = "Hello";
    char *b;
    int c = strlen(a) + 1;
    b = malloc(sizeof(char) * c);
    strcpy(b, a);
    printf(" %s\n", b);
    return (0);
}