#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Null
 */
void print_alphabet(void)
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
