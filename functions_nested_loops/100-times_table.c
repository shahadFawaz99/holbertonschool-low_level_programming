#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0.
* @n: The number for which the times table will be printed.
*
* Return: Nothing.
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int result = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (result < 10 && j != 0)
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result >= 100)
_putchar((result / 100) + '0');
if (result >= 10)
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
