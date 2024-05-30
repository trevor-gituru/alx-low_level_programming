#include "main.h"

/**
 * natural - Evaluates sum of multiples of 3 & 5 till 1024
 * Return: Sum of multiples
 */
int natural(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of muliples is: %d.\n", sum);
	return (sum);
}
