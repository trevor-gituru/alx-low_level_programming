#ifndef main_h
#define main_h

/* Header files */
#include <unistd.h>
#include <string.h>

/* Function prototype */
void prints(void);
void print_alphabet(void);

/**
 * prints - Prints a character
 *
 * Return: Null
 */
int _putchar(char c)
{

	/* Using the write function to print the character followed by a new line */
	return write(STDOUT_FILENO, &c, 1);
}

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

#endif
