#include <stdio.h>

/**
 * main - Prints the lower alphabet except q & e
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	int n;

	letter = 'a';
	for (n = 0; n < 26; n++)
	{
		if (letter == 'e' || letter == 'q')
		{
			letter = (char) (((int) letter) + 1);
			continue;
		}
		else
		{
		putchar(letter);
		letter = (char) (((int) letter) + 1);
		}
	}
	putchar('\n');

	return (0);
}
