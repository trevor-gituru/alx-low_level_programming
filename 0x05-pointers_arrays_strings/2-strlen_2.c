#include <stdio.h>
int main(){
    int len;
    int i;
    char *ptr;

    char h[] = "Hello world!";
    ptr = h;
    i = 0;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
        i++;
    }
    printf("%d", i);
}