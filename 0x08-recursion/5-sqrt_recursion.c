#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the sqrt of a number
 * @n: user input
 *
 * Return: the sqr of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n,0));
}
/**
 * actual_sqrt_recursion - a recursive function
 * @n: user input
 * @i: iterator
 *
 * Return: the squareroot
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
