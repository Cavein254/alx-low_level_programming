#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n : parameter showing number of time a table is to print
 * Return: The fn does not return
 */
void print_times_table(int n)
{
	int a = 0, val, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			val = a * b;
			if (b == 0)
				_putchar('0' + val);
			else if (val < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + val);
			}
			else if (val < 100)
			{
				_putchar(' ');
				_putchar('0' + val / 10);
				_putchar('0' + val % 10);
			}
			else
			{
				_putchar('0' + val / 100);
				_putchar('0' + (val - 100) / 10);
				_putchar('0' + val % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
