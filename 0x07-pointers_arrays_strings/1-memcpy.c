#include "main.h"

/**
 * _memcpy - funtion that copies memory area
 * @dest:memory where stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
