#include "main.h"

/**
 * print_alphabet - the entry point
 * Description: prints the alphabet, in lowercase
 * Return: has no return value
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}

