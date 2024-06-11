#include <string.h>
#include "main.h"

/**
  * *_strcat - concatenating two strings
  * @dest: destination param big enough to hold src
  * @src: source
  *
  * Return: pointer to a character
  **/

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < src_len; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	*(dest + dest_len + src_len + 1) = '\0';

	return (dest);
}
