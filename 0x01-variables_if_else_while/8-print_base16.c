#include <stdio.h>

/**
 * main - Prints the numbers base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;
	int letter;
	int n;

	number = (int) '0';
	letter = 'a';
	for (n = 0; n < 10; n++)
	{
		putchar((char) number);
		number++;
	}
	for (n = 0; n < 6; n++)
	{
		putchar(letter);
		letter = (char) (((int) letter) + 1);
	}
	putchar('\n');

	return (0);
}
