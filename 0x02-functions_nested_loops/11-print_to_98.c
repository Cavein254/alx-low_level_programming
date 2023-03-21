#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @c: the initial value
 * Return: 0
 */
void print_to_98(int c)
{
	if (c > 0 || c == 0)
	{
		_putchar(c * 10 + '0');
	}
	else
	{
		c *= -1;
		_putchar(c * 10 + '0);
	}
}
