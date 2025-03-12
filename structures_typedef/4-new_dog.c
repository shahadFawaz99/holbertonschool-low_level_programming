#include <stdio.h>
#include <stdlib.h>
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
int i, name_len = 0, owner_len = 0;
/* Calculate the length of name */
while (name[name_len] != '\0')
name_len++;
/* Calculate the length of owner */
while (owner[owner_len] != '\0')
owner_len++;
/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);  /* Return NULL if memory allocation fails */
/* Allocate memory for the name and owner strings */
new_dog->name = malloc(name_len + 1);
if (new_dog->name == NULL)
{
free(new_dog);  /* Free previously allocated memory */
return (NULL);
 }
/* Manually copy the name */
for (i = 0; i < name_len; i++)
new_dog->name[i] = name[i];
new_dog->name[i] = '\0';  /* Null-terminate the string */
new_dog->owner = malloc(owner_len + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);  /* Free previously allocated memory */
free(new_dog);
return (NULL);
}
/* Manually copy the owner */
for (i = 0; i < owner_len; i++)
new_dog->owner[i] = owner[i];
new_dog->owner[i] = '\0';  /* Null-terminate the string */
/* Assign the age */
new_dog->age = age;
return (new_dog);  /* Return pointer to the new dog */
}
