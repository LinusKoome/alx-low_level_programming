#include "main.h"

/**
 * _strcat-concanates two strings
 * @dest:a pointer to an array of characters
 * @src:a pointer to an array of characters
 * Return:dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
