#include "main.h"

/**
 * print_line - Draws a straight line using the _ character.
 * @n: The number of times the _ character should be printed.
 */
void print_line(int n)
{
	int i;  /* Declare the loop variable here */

	if (n <= 0)
	{
		_putchar('\n');  /* Print only a newline if n is 0 or less */
	}
	else
	{
		for (i = 0; i < n; i++)  /* Loop through and print the _ character */
		{
			_putchar('_');  /* Print the _ character */
		}
		_putchar('\n');  /* Print a newline after the line */
	}
}
