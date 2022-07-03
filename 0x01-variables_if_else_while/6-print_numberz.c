#include <stdio.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
