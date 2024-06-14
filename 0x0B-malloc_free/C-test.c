#include<stdio.h>
#include<stdlib.h>
/**
 * Dynamic allocation of 1D int array
 */
int main(void)
{
    int size;
    int *arr;
    int i;

    size = 3;
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
    {
        printf("ERROR 1");

        return (1);
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    free(arr);

    return (0);
    

}