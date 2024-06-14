#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Create a 2D array of string pointers
 */
int main(void)
{
    char **ar;
    char *a[3] = {"Hello", "Wonderful", "World"};
    int i, j;
    ar = malloc(sizeof(char *) * 3);
    if (ar == NULL)
    {
        puts("Error1\n");
        return 1;

    }
    for (i = 0; i < 3; i++)
    {
        ar[i] = malloc(sizeof(char) * (strlen(a[i]) + 1));
        if (ar[i] == NULL)
        {

            puts("Error 2\n");
            for ( j = 0; j < i; j++)
            {
                free(ar[j]);
            }
            free(ar);
            return 1;
        }
        strcpy(ar[i], a[i]);
        printf("%s\n", ar[i]);
    }
    for (i = 0; i < 3; i++)
    {
        free(ar[i]);
    }
    free(ar);
    return 0;
    

    
}