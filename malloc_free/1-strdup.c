#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Creates a duplicate of a given string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	/* إذا كان النص المدخل NULL، نرجع NULL */
	if (str == NULL)
		return (NULL);

	/* حساب طول النص */
	while (str[len] != '\0')
		len++;

	/* حجز ذاكرة جديدة */
	duplicate = malloc(sizeof(char) * (len + 1));

	/* التحقق من نجاح malloc */
	if (duplicate == NULL)
		return (NULL);

	/* نسخ النص إلى الذاكرة الجديدة */
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	/* إضافة الحرف null في النهاية */
	duplicate[len] = '\0';

	return (duplicate);
}
