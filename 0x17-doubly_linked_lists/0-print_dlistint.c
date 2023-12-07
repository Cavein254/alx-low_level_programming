#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;

	while(h != NULL)
		{
			counter = counter + 1;
			h = h->next;
		}
	return (counter);
}
