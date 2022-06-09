#include <stdio.h>

/**
 * main - entry point
 * Description:  prints the first 50 Fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int a;
	unsigned long fib1 = 0, fib2 = 1, b;

	for (a = 0; a < 50; a++)
	{
		b = fib1 + fib2;
		printf("%lu", b);

		fib1 = fib2;
		fib2 = b;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
