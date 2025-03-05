#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line, using recursion.
 * @s: the string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* If we reached the end of the string */
    {  /* (null terminator) */
        _putchar('\n');  /* Print a new line */
        return;  /* Exit the function */
    }
    _putchar(*s);  /* Print the current character */
    _puts_recursion(s + 1);  /* Recursively call the function with the next character */
}
