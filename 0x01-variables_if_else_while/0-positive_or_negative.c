#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main-the entry point
 * Return:void
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	return (0);
}