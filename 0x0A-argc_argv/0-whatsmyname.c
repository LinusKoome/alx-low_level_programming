#include <stdio.h>

/**
 * main-prints the name of the programe
 * @argc:argument count
 * @argv:array of pointers to argument strings
 * Return:zero
 **/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
