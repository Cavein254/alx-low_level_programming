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
            printf("[0] (nil) \n");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        num += 1;
    }
    return (num);
}

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
