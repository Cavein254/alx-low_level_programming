#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: the start of the linked list
 * Return: does not return
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	curr = head;

	while (curr != NULL)
	{
		listint_t *nxt;

		nxt = curr->next;
		free(curr);
		curr = nxt;
	}
}
