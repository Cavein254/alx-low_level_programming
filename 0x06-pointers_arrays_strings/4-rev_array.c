#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: The first string
 * @b: The second string
 *
 * Return: this fn does not return
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

