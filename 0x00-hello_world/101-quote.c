#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific string using the write function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* Using the write function to print the string followed by a new line */
	write(STDOUT_FILENO, message, strlen(message));
	/* End the program with the value 0 */
	return (0);
}
