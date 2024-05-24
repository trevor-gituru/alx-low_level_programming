#include <stdio.h>

/**
 * main - Prints the lower & upper alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	int n;

	letter = 'a';
	for (n = 0; n < 26; n++)
	{
		putchar(letter);
		letter = (char) (((int) letter) + 1);
	}
	letter = 'A';
	for (n = 0; n < 26; n++)
	{
		putchar(letter);
		letter = (char) (((int) letter) + 1);
	}
	putchar('\n');

	return (0);
}
