#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints number of elements in a node
 * @h: pointer to the provided list
 *
 * Return: size of the node
 */
size_t print_dlistint(const dlistint_t *h) {
  size_t counter = 0;

  while (h != NULL) {
    counter++;
    h = h->next;
  }

  return counter;
}
