#include "lists.h"
/**
 * print_listint - prints the elements of a linked list
 * @h: pointer to the linked list
 * Return: integer variable
 * */
size_t print_listint(const listint_t *h)
{
   size_t temp;

   temp = 0;
   while (h != NULL)
   {
       printf("%d\n", h->n);
       h = h->next;
       temp++;
   }
   return temp;
}
