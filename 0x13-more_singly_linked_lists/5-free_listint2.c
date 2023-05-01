#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: the first node
 * Return: this function does not return
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	curr = *head;
	while (curr != NULL)
	{
		listint_t *nxt;

		nxt = curr->next;
		free(curr);
		curr = nxt;
	}
	*head = NULL;
}
