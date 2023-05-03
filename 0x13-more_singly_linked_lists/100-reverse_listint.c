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
	listint_t *nxt;
	listint_t *pre;

	pre = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt  = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = nxt;
	}
	*head = pre;
	return (*head);
}
