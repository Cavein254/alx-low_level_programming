#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that finds the squareroot of a number
 * @n: the user input
 *
 * Return: the squareroot of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - a function for recursive calls
 * @n: number the user provides
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
