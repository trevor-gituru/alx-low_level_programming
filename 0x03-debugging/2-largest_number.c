#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int i;
	int n[3];
	int largest = a;

	n[0] = a;
	n[1] = b;
	n[2] = c;
	for (i = 1; i < 3; i++)
	{
		if (n[i] > largest)
			largest = n[i];
	}
	return (largest);
}
