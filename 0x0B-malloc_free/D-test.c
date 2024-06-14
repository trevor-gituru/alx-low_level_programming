#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Dynamic allocation of 2D int array*/
int main(void)
{
    int **arr;
    int row;
    int column;
    int i, j;

    row = 4;
    column = 2;
    arr = malloc(sizeof(int *) * row);
    if (arr == NULL)
    {
        puts("Err 1\n");
        return (1);
    }
    for (i = 0; i < row; i++)
    {
        arr[i] = malloc(sizeof(int) * column);
        if (arr[i] == NULL)
        {
            puts("eRR 2\n");
            for (j = 0; j < i; j++)
            {
                free(arr[i]);
            }
            free(arr);
            
            return 1;
        }
        for (j = 0; j < column; j++)
        {
            arr[i][j] = i * column + j;
            printf("%d\n", arr[i][j]);
        }
        
    }
    
    for (i = 0; i < column; i++)
    {
        free(arr[i]); 
    }
    free(arr);

    return (0);
}