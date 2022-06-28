#include <stdio.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		putchar('\n');
	}
	return (0);
}
