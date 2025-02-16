#include "main.h"
/**
* _isalpha - checks if a character is an alphabetic letter.
* @c: the character to be checked.
*
* Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) /* Check both cases */
return (1);
else
return (0);
}
