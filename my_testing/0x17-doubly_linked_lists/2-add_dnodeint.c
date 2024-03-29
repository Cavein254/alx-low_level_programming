#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
  dlistint_t *new_node = malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    exit(1);
  new_node->n = n;
  /**if the list is empty*/
  if (*head == NULL) {
    *head = new_node;
    return new_node;
  }
  /**List not empty*/
  new_node->next = *head;
  (*head)->prev = new_node;
  *head = new_node;

  return new_node;
}
