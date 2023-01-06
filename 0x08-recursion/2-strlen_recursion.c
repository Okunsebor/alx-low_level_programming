#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
