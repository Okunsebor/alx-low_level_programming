#include <stdio.h>

/**
 * main - print the number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	int counter;

	for (counter = 0; counter < argc; counter++)

		printf("argv[%2d]: %s\n", counter, argv[counter]);

	return (0);
}
