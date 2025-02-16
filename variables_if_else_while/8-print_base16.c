#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
/* طباعة الأرقام 0-9 باستخدام ASCII */
for (num = 48; num <= 57; num++)
{
putchar(num);
}
/* طباعة الحروف a-f باستخدام ASCII */
for (num = 97; num <= 102; num++)
{
putchar(num);
}
putchar('\n'); /* طباعة سطر جديد */
return (0);
}
