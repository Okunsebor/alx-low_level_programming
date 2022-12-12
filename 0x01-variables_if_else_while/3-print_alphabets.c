#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and the in uppercase, follow by a new line
 * return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'a';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
