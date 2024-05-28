#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Null
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char letter;
		int n;

		letter = 'a';
		for (n = 0; n < 26; n++)
		{
			_putchar(letter);
			letter = (char) (((int) letter) + 1);
		}
		_putchar('\n');
	}
}
