#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: the first element of the node
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;

	*head = NULL;
	while (curr != NULL)
	{
		listint_t *n;

		n = curr->next;
		curr->next = *head;
		*head = curr;
		curr = n;
	}
	return (*head);
}
