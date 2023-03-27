#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: The array under investigation
 * @n: Number of arrays to be displayed
 *
 * Return: This function does not return
 */
void print_array(int *a, int n)
{
    int *arrp = a;
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d, ", arrp[i]);
    }
    printf("\n");
}