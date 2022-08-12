#include "main.h"

/**
 * factorial-computes the factorial of a given number
 * @n:an integer which the factorial is to be computed for
 * Return:factorial of the given number
 * If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
