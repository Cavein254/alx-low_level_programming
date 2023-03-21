#include "main.h"
/**
 * _islower - function checks if the provided value is smallcaps
 * @c: an integer used as parameter for the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
