#include "main.h"

/**
 * _islower - entry point
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase, 0 otherwise
 * @c: The character to be checked
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}

