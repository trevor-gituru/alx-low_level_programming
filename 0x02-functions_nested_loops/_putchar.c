#include "main.h"
#include <unistd.h>

/**
 * prints - Prints a single character
 *
 * Return: Null
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

