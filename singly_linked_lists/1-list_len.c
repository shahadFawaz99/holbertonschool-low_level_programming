#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
