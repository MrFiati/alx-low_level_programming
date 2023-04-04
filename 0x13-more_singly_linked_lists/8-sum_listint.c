#include "lists.h"

/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: start of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
