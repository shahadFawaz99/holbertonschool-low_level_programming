#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings separated by a given separator.
* @separator: The string to print between the strings.
* @n: The number of strings passed to the function.
*
* Return: Nothing (void).
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
