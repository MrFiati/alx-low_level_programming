#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the beginning of linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast != slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next;

		if (fast != NULL)
		fast = fast->next;
	}
	if (fast == NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	else
	{
		 printf("[%p] %d\n", (void *)slow, slow->n);
		 printf("-> [%p] %d\n", (void *)fast, fast->n);
		 count += 2;

	}
	return (count);
}


