#include "lists.h"
/**
 * print_list - this function prints values from a node list
 * @h: a pointer to the node list
 * Return: number of items in the list
*/
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
