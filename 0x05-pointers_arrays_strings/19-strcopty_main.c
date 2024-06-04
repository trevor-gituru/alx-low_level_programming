#include <stdio.h>
int main(){
    char st[] = "Hello world";
    char s1[98];
    int i;
    int length = sizeof(st)/sizeof(char);
    printf("%d\n", length);
}