#include "main.h"
/**
* print_sign - Prints the sign of a number.
* @n: The number to be checked.
*
* Return: 1 if n is greater than zero,
*         0 if n is zero,
*        -1 if n is less than zero.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+'); /* Print + for positive numbers */
return (1);
}
else if (n == 0)
{
_putchar('0'); /* Print 0 for zero */
return (0);
}
else
{
_putchar('-'); /* Print - for negative numbers */
return (-1);
}
}
