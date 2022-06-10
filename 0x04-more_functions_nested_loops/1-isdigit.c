#include "main.h"

/**
 * _isdigit - entry point
 * Description: checks for a digit (0 through 9)
 * @c: digit
 * Return: Returns 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
