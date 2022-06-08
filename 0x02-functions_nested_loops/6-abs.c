#include "main.h"

/**
 * _abs - the entry point
 * Description: computes the absolute value of an integer
 * Return: Value of the integer
 * @p: an integer
 */

int _abs(int p)
{
	if (p >= 0)
		p = +p;
	else
		p = -p;
	return (p);
}

