#include <stdio.h>

/**
 * main - Prints the alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	int n;

	letter = 'a';
	for (n = 25; n >= 0; n--)
	{
		putchar((char) (((int) letter) + n));
	}
	putchar('\n');

	return (0);
}
