#include "main.h"

/**
 * _isalpha - Evaluates for alphabetical
 * @c: Ascii rep of character
 * Return: 1 (Lowercase), 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
