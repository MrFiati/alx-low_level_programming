#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - Entry point
 * Description: Adds new node at the end of a listint_t list
 * @head: Pointer to pointer to the head node of the list
 * @n: New node
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	/* New Node */
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;

	while (current->next)
	{
		current = current->next;
	}
	/* Add the new node to the end of the list */
	current->next = new;
	return (new);
}
