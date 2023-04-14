#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
 * _calloc- allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: the size of the array
 * 
 * Return: NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);
    ptr = malloc(size * nmemb);
    if (ptr == NULL)
        return (NULL);
    _memset(ptr, 0, nmemb * size);
    return (ptr);
}
