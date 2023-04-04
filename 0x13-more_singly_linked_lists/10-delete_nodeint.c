#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the beginning of linked list
 * @index: index to be deleted
 * Return: 1 if succesful -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	 unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
	*head = (*head)->next;
	free(current);
	return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
		return (-1);
		}
	previous = current;
	current = current->next;
	}
	previous->next = current->next;
	free(current);

	return (1);
}

