#include "main.h"

/**
 * print_last_digit - Evaluates last digit
 * @number: Number
 * Return: Last digit
 */
int print_last_digit(int number)
{
	int last = number % 10;

	if (last > 0)
	{
		_putchar('0' + last);
		return (last);
	}
	else if (last < 0)
	{
		last *= -1;
		_putchar('0' + last);
		return (last);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
