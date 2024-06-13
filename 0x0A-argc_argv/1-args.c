#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
  * main - prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: 0, on success
  **/

int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
