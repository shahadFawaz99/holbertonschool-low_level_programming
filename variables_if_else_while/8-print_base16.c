#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++) /* طباعة الأرقام 0-9 باستخدام ASCII */
{
putchar(num);
}
for (num = 97; num <= 102; num++) /* طباعة الحروف a-f باستخدام ASCII */
{
putchar(num);
}
putchar('\n'); /* طباعة سطر جديد */
return (0);
}
