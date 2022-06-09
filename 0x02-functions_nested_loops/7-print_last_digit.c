#include "main.h"

/**
 * print_last_digit - the entry point
 * Description: prints the last digit of a number
 * Return: the value of the last digit
 * @a: an integer
 */

int print_last_digit(int a)
{
	int final = a % 10;

	if (final < 0)
		final *= -1;

	_putchar(final + '0');

	return (final);
}
