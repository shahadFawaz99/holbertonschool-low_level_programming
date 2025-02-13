#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++) /* ASCII 48 = '0' ، ASCII 57 = '9' */
putchar(num);
putchar('\n'); /* طباعة سطر جديد */
return (0);
}
