#include "main.h"
/**
 * print_last_digit - function that computes the last number of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	int last;

	if (c < 0)
		last = (c % 10) * -1;
	else
		last = c % 10;
	_putchar(last + '0');

	return (last);
}
