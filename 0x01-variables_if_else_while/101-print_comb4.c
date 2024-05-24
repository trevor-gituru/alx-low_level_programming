#include <stdio.h>

/**
 * main - Prints the numbers base 10 with space & commas
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (i != j && i != k && j != k && j < k && i < j && i < k)
			{
				putchar((char) (i + 48));
				putchar((char) (j + 48));
				putchar((char) (k + 48));
				if (i == 7 && j == 8 && k == 9)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');

	return (0);
}
