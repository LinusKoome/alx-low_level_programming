#include "main.h"

/**
 * _isupper - entry point
 * Description: checks for uppercase character
 * Return: return 1 if A is capital, else return 0
 * @c: a character
 */

int _isupper(int c)
{
	char capital = 'A';
	int upper = 0;

	for (; capital <= 'Z'; capital++)
	{
		if (c == capital)
		{
			upper = 1;
			break;
		}
	}

	return (upper);
}
