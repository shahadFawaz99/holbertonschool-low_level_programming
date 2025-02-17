#include "main.h"
/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number for the times table.
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
_putchar('0' + i * j);  
}
else
{
_putchar(',');
_putchar(' ');
if (i * j < 10)
{
_putchar(' ');  // Space for single digit
_putchar('0' + i * j);
}
else if (i * j < 100)
{
_putchar('0' + (i * j / 10));  // Tens place
_putchar('0' + (i * j % 10));  // Ones place
}
else
{
_putchar('0' + (i * j / 100));  // Hundreds place
_putchar('0' + ((i * j / 10) % 10));  // Tens place
_putchar('0' + (i * j % 10));  // Ones place
}
}
}
_putchar('\n');
}
}
