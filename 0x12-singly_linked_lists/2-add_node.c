#include "list.h"
/**
 * add_node - creates a node at the start of a linked list
 * @head: a pointer to a pointer of the linked list
 * @str: data to be added to the linked list
 * Return: NULL for failure. Address for success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int size = 0;

	while (str[len])
		size += 1;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = size;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
