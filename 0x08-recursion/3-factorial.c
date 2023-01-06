#include "main.h"

/**
 * factorial - print the factorial of a number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		(n == 0);
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
