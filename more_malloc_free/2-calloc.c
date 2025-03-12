#include <stdlib.h>
#include "main.h"
/**
* _calloc - Allocates memory for an array of nmemb elements of size bytes,
*and initializes the memory to zero.
*@nmemb: Number of elements.
*@size: Size of each element.
*
*Return: Pointer to the allocated memory, or NULL if malloc fails,
*or if nmemb or size is 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size;
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
/* Initialize memory to zero */
for (unsigned int i = 0; i < total_size; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
