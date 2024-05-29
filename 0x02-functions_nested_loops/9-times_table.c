#include "main.h"

/**
 * times_table - Print i * j
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int t;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			t = i * j;
			if (t < 10)
			{
				_putchar(' ');
				_putchar('0' + t);
			}
			else
			{
				_putchar('0' + t / 10);
				_putchar('0' + (t % 10));
			}

		}
		_putchar('\n');
	}
}
