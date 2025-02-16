#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 8; num1++)  // First digit from 0 to 8
{
for (num2 = num1 + 1; num2 <= 9; num2++)  // Second digit from num1+1 to 9
{
putchar(num1 + '0');  // Print the first digit
putchar(num2 + '0');  // Print the second digit
if (num1 != 8 || num2 != 9)  // Check if it's the last combination
{
putchar(',');  // Print comma
putchar(' ');  // Print space
}
}
}
putchar('\n');  // Print a newline after all combinations
return (0);
}
