#include <stdio.h>

/**
 * main - Prints the numbers base 10 with space & commas
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar((char) (i + 48));
				putchar((char) (j + 48));
				if (i == 8 && j == 9)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}			}
		}
	}
	putchar('\n');

	return (0);
}
