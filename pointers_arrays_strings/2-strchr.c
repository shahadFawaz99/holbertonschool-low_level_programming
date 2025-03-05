#include "main.h"
/**
* _strchr - Locates a character in a string.
* @s: Pointer to the string.
* @c: Character to find.
*
* Return: Pointer to the first occurrence of the character c,
*         or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')  /* Iterate through the string */
{
if (*s == c)  /* Check if the current character matches c */
{
return (s);  /* Return the pointer to the character */
}
s++;  /* Move to the next character */
}
if (*s == c)  /* Handle the case where c is the null terminator */
{
return (s);
}
return (NULL);  /* Return NULL if the character is not found */
}
