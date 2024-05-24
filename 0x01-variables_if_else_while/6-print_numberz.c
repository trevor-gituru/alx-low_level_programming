#include <stdio.h>

/**
 * main - Prints the numbers base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;
	int n;

	number = (int) '0';
	for (n = 0; n < 10; n++)
	{
		putchar((char) number);
		number++;
	}
	putchar('\n');

	return (0);
}
