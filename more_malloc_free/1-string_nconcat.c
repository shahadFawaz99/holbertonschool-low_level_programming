#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes from s2 to concatenate.
*
* Return: Pointer to the newly allocated memory containing s1 + n bytes of s2.
*         If function fails, return NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1 = 0, len2 = 0;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
