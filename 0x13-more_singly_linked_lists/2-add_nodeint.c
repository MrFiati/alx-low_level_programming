#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Entry point...
 *
 * Description: Adds new node at the beginning of the list
 *
 * @head: Pointer to the head of the listint_t list
 * @n: New node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	/* New node */
	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
