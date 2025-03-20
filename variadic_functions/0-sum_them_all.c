#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;
    va_list args;

    if (n == 0)
        return (0);

    va_start(args, n);  /* Initialize the argument list */

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);  /* Retrieve next argument and add to sum */

    va_end(args);  /* Clean up argument list */

    return (sum);
}
