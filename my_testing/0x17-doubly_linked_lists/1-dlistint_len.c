#include "lists.h"

size_t print_dlistint(const dlistint_t *h) {
  size_t counter;

  counter = 0;

  /**Accounting when h is null */
  if (h == NULL)
    return (counter);
  /**Accounting for backward*/
  while (h->prev != NULL) {
    counter++;
    h = h->prev;
  }
  /**Accounting for forward*/
  while (h != NULL) {
    counter++;
    h = h->next;
  }
  return (counter);
}
