#include "main.h"

/**
  * print_square - prints a square
  * @size: size of the square
  *
  * Return: void
  **/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
