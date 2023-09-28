#include "main.h"
/**
 * factorial - a function to calculate the factorial of a number
 * @n: The number to be calculated
 *
 * Return: n factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
