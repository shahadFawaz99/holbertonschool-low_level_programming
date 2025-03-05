#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring
* @haystack: the string to be searched
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring,
*         or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *n = needle;
if (!*n)  /* If the needle is an empty string, return haystack */
return (haystack);
while (*h)  /* Traverse through haystack */
{
char *start = h;
n = needle;
while (*h && *n && *h == *n)  /* Compare haystack and needle */
{
h++;
n++;
}
if (!*n)  /* If we have reached the end of the needle, we found the match */
return (start);
h = start + 1;  /* Move haystack pointer to next position */
}
return (NULL);  /* If no match is found, return NULL */
}
