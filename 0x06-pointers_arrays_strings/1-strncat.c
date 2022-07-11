#include "main.h"

/**
 * _strncat-concanates two strings and use at most n bytes from src
 * @dest:pointer to a character array
 * @src:pointer to a character array
 * @n:interger for the number of bytes
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
