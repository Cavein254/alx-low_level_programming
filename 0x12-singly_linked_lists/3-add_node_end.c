#include "lists.h"
/**
 * add_node_end - puts a node at the end of a linked list
 * @head: a pointer to a pointer of the linked list
 * @str: The data to be written
 * Return: NULL or the Address of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *holder = *head;
	int size = 0;

	while (str[size])
		size++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (holder->next)
		holder = holder->next;

	holder->next = new;

	return (new);
}
