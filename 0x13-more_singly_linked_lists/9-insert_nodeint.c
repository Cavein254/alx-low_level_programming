#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node on an index
 * @head: initial node
 * @idx: the provided index
 * @n: the value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
