#include "main.h"

/**
 * _abs - Evaluates absolute value
 * @n: Number
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
