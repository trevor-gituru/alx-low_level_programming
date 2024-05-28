#include "main.h"
#include <unistd.h>

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


