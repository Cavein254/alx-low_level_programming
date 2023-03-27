#include "main.h"
/**
 * swap_int - interchanges given integers
 * @a: The first pointer to the integer
 * @b : Pointer to the second integer
 *
 * Return: This function does not return
 */
void swap_int(int *a, int *b)
{
	int *pa = a;
	int *pb = b;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
