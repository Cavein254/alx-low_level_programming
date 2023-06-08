#include "main.h"
/**
 * _pow_recursion - return x power y
 * @x the value of x
 * @y: the value of y
 *
 * Return: results
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x,y - 1));
}
