#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints a struct dog
* @d: Pointer to the struct dog to print
*
* Description: If an element is NULL, it prints (nil) instead.
*If d is NULL, it prints nothing.
*/
void print_dog(struct dog *d)
{
if (d == NULL) /* Check if the struct is NULL */
return;
/* Print name, handle NULL */
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
/* Print age */
printf("Age: %f\n", d->age);
/* Print owner, handle NULL */
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
