#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
  dlistint_t *new_node = malloc(sizeof(dlistint_t));
  dlistint_t *temp = *head;

  if (new_node == NULL)
    exit(1);
  new_node->n = n;
  if (*head == NULL) {
    *head = new_node;
    return (new_node);
  }
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = new_node;
  new_node->prev = temp;
  return new_node;
}
