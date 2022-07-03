#include <stdio.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	char letters;
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
	}
	for (letters = 'a'; letters < 'g'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
