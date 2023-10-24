#include "lists.h"

/**
 * get_nodeint_at_index - get the a  certain node in a linked list
 * @head: initial node.
 * @index: the index.
 *
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
