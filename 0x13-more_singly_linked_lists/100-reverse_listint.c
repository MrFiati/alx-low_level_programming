#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer to start of linked list
 * Return: a pointer to the first node of the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
