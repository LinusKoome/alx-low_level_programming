#include <stdio.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
		if (numbers != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
