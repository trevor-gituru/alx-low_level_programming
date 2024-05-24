#include <stdio.h>

/**
 * main - Prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	int n;

	letter = 'A';
	for (n = 0; n < 26; n++)
	{
		putchar(letter);
		letter = (char) (((int) letter) + 1);
	}
	putchar('\n');

	return (0);
}
