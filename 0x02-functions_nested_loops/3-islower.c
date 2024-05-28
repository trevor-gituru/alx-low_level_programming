#include "main.h"

/**
 * _islower - Evaluates for lower case
 * @c: Ascii rep of character
 * Return: 1 (Lowercase), 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
