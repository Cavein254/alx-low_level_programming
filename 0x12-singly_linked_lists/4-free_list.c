#include "list.h"
/**
 * free_list - empties a linked list
 * @head: the start of the list
 */
void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
