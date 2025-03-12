#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the newly created dog, or NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);  /* Return NULL if memory allocation fails */
/* Allocate memory for the name and owner strings and copy them */
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);  /* Free previously allocated memory */
return (NULL);
}
strcpy(new_dog->name, name);
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);  /* Free previously allocated memory */
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
/* Assign the age */
new_dog->age = age;
return (new_dog);  /* Return pointer to the new dog */
}
