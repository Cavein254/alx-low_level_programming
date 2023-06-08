#include "main.h"
/**
 * is_prime - chacks if a number is prime or not
 * @n: the number under evaluation
 *
 * Return: 1 if the number is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n-1));
}
/**
 * actual_prime - calculates the prime of a number
 * @n: the number under evaluation
 * @i: the iterator
 *
 * Return: 1 if its prime
 */
int actual_prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
