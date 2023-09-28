#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - a function that checks if a number is prime
 * @n: provided number
 *
 * Return: value 1 for prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - the prime of a number given number
 * @n: a number to be evaluated
 * @i: the iterator
 *
 * Return: 1 for prime
 */
int actual_prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

