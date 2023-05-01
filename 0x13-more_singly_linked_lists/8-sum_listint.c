#include "lists.h"

/**
 * sum_listint - the sum of values in the nodes
 * @head: Initial value of the list.
 *
* Return:  the total sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
