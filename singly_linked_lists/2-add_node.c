#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer of the head node
 * @str: String to be duplicated and added to the node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	int len = 0;

	if (str == NULL)
		return (NULL);

	/* Duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	/* Set the head to the new node */
	*head = new_node;

	return (new_node);
}
