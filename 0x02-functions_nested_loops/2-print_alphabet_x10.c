#include "main.h"

/**
 * print_alphabet_x10 - the entry point
 * Description: prints 10 times the alphabet, in lowercase
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char alphabet;

	for (times = 0; times < 10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
