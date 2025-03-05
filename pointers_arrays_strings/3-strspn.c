#include "main.h"
/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be scanned.
* @accept: The string containing the characters to match.
*
* Return: The number of bytes in the initial segment of s which
* consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *ptr;
/* Loop through each character in s */
while (*s)
{
ptr = accept;
/* Check if the character from s exists in accept */
while (*ptr)
{
if (*s == *ptr)
{
count++;  /* If match found, increase count */
break;
}
ptr++;
}
if (*ptr == '\0')  /* If no match is found, break out of the loop */
{
break;
}
s++;  /* Move to the next character in s */
}
return (count);
}
