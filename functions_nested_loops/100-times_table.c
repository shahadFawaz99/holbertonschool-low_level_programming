#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The multiplication table to print
 *
 * Description: If n is greater than 15 or less than 0,
 * the function does nothing.
 */
void print_times_table(int n)
{
 int row, col, product;

 if (n < 0 || n > 15)
  return;

 for (row = 0; row <= n; row++)
 {
  for (col = 0; col <= n; col++)
  {
   product = row * col;

   if (col == 0)
    _putchar('0' + product);
   else
   {
    _putchar(',');
    _putchar(' ');

    if (product < 10)
    {
     _putchar(' ');
     _putchar(' ');
     _putchar('0' + product);
    }
    else if (product < 100)
    {
     _putchar(' ');
     _putchar((product / 10) + '0');
     _putchar((product % 10) + '0');
    }
    else
    {
     _putchar((product / 100) + '0');
     _putchar(((product / 10) % 10) + '0');
     _putchar((product % 10) + '0');
    }
   }
  }
  _putchar('\n');
 }
}
