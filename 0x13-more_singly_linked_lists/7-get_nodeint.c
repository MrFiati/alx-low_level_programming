#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: A pointer to the first node of the list
 * @index: The index of the node to retrieve (starting at 0)
 *
 * Return: A pointer to the nth node of the list,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	return (current);
}
