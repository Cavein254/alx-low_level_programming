#ifndef LISTS_H_
#define LISTS_H_
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct list_s - a singly linked list
 * @str: a string - (malloc'ed) string
 * @len: the length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
