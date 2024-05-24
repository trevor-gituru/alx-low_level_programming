#include <stdio.h>

/**
 * main - Prints the numbers base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	char number;
	int n;

	number = '0';
	for (n = 0; n < 10; n++)
	{
		putchar(number);
		number = (char) (((int) number) + 1);
	}
	putchar('\n');

	return (0);
}
