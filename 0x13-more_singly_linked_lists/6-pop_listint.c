#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - removes a node
 * @head: the first node
 * Return: 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);

	current = *head;
	n = current->n;
	new = current->next;
	free(current);
	*head = new;

	return (n);
}
