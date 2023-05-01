#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - a function that returns length of a linked list
 * @h: the first part of a linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
