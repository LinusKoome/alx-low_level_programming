#include <stdio.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}

	putchar('\n');
	return (0);
}
