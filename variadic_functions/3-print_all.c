#include <stdarg.h>
#include <stdio.h>
/**
* print_all - Prints anything based on the given format.
* @format: List of argument types.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", sep);
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else
{
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
}
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
