#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - Concatenates two strings into a new allocated memory.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the newly allocated string, or NULL if failed.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* حساب طول كل سلسلة */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
/* تخصيص الذاكرة لحجم المجموع + 1 للحرف null */
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
/* نسخ s1 إلى concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];
/* نسخ s2 بعد s1 */
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];
/* إضافة null في النهاية */
concat[i + j] = '\0';
return (concat);
}
