#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;
	int length = strlen(message);

	for (i = 0; i < length; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
