#include <stdio.h>

/**
 * main-prints the number of arguments passed into the program
 * @argv:pointer to an array of arguments
 * @argc:numbr of arguments passed
 * Return:Zero
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
