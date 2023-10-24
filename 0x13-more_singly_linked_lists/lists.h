#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
typedef unsigned long size_t;
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct lintint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
