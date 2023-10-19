#include "list.h"
/**
 * list_len - A function to count number of elements in linked list
 * @h: A pointer to the linked list
 * Return: total elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len ++;
	}

	return (len);
}
