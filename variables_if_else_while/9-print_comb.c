#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');  // Print the number as a character
if (num != 9)  // Check if it's not the last number
{
putchar(',');  // Print a comma
putchar(' ');  // Print a space
}
}
putchar('\n');  // Print a new line at the end
return (0);
