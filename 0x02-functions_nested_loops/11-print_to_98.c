#include "main.h"

/**
 * print_to_98 - Prints from n to 98
 * @n: Number to start from
 * Return: Nothing
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n > 98)
	{
		n--;
		while (n > 97)
			printf(", %d", n--);
	}
	else
	{
		n++;
		while (n < 99)
			printf(", %d", n++);
	}
	printf("\n");
}
