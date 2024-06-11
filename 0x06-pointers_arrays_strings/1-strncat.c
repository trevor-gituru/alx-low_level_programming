#include <string.h>
#include "main.h"

/**
  * *_strncat - concatenating two strings
  * @dest: destination param big enough to hold src
  * @src: source
  * @n: number of bytes to use
  *
  * Return: pointer to a character
  **/

char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n && i < (98 - dest_len); i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
    if (98 - dest_len > n)
    {
        *(dest + dest_len + src_len + 1) = '\0';
    }
    
	

	return (dest);
}
