#include "main.h"

/**
 * print_times_table - Print n times table
 *@n: The number to print times table
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int t;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i < n + 1; i++)
	{
		_putchar('0');
		for (j = 1; j < n + 1; j++)
		{
			_putchar(',');
			_putchar(' ');
			t = i * j;
			if (t < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (t < 100)
			{
				_putchar(' ');
				_putchar('0' + (t / 10));
			}
			else
			{
				_putchar('0' + (t / 100));
				_putchar('0' + (t / 10) % 10);
			}
				_putchar('0' + (t % 10));

		}
		_putchar('\n');
	}
}
