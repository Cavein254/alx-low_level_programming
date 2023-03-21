#include "main.h"
/**
 * _abs  - function to computes the absolute value of an integer
 * @c: A value for whose absolute value is being computed
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
