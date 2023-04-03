#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: an pointer
 * @size: the size of the matrix
 *
 * Return: It does not return
 */
void print_diagsums(int *a, int size)
{
	int idx;
	int x = 0;
	int y = 0;

	for (idx = 0; idx < size; idx++)
	{
		x += a[idx];
		a += size;
	}

	a -= size;

	for (idx = 0; idx < size; idx++)
	{
		y += a[idx];
		a -= size;
	}

	printf("%d, %d\n", x, y);
}
