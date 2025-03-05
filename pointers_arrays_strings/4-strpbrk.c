#include "main.h"
#include <stddef.h>  /* إضافة هذه السطر لتعريف NULL */
/**
*_strpbrk - Searches a string for any of a set of bytes.
*@s: The string to be scanned.
*@accept: The set of bytes to be searched for in s.
*
*Return: A pointer to the first occurrence in s of any of the bytes
*in accept,
*or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)  /* Loop through each character in s */
{
char *ptr = accept;
/* Loop through accept and check if any character matches the current character in s */
while (*ptr)
{
if (*s == *ptr)  /* If match found, return the pointer to the character in s */
{
return (s);
}
ptr++;
}
s++;  /* Move to the next character in s */
}
return (NULL);  /* Return NULL if no match found */
}
