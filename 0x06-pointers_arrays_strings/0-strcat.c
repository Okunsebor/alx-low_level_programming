#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: first string
 * @src: second string to catenate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest != '\0';
	return (s);
}
