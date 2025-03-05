#include "main.h"
/**
* factorial - returns the factorial of a given number.
* @n: the number for which the factorial is to be calculated.
*
* Return: the factorial of the number, or -1 if n < 0 (error case).
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
