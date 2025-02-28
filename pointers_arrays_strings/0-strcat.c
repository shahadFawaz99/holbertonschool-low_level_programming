#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
		i++;

	/* Append source string to destination */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}
