#include <string.h>
#include "main.h"

/**
  * *_strncpy - copies a string using strncpy()
  * @dest: destination
  * @src: source
  * @n: number of characters to be copied
  *
  * Return: pointer to a string
  **/

char *_strncpy(char *dest, char *src, int n)
{
	int src_len;
	int dest_len;
	int i;

	src_len = 0;
	dest_len = 0;
	while (*(src + src_len) != '\0')
	{
		src_len++;
	}
	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
    {
        *(dest + i) = '\0';
    }
    

	return (dest);
}
