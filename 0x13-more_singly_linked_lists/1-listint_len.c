#include <stdio.h>
#include <stdlib.h>

#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h : the head of the node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
