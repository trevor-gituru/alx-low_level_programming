#ifndef main_h
#define main_h

/* Header files */
#include <unistd.h>
#include <string.h>

/* Function prototype */
void prints(void);

/**
 * prints - Prints the _putchar string
 *
 * Return: Null
 */
void prints(void)
{
	char message[] = "_putchar\n";

	/* Using the write function to print the string followed by a new line */
	write(STDOUT_FILENO, message, strlen(message));
}
#endif
