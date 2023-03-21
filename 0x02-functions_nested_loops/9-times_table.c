#include "main.h"
/**
 * times_table - function that prints the 9 times table,
 * starting with 0.
 * Return: does not return anything
 */
void times_table(void)
{
	int start =0;
	int end = 0;

	for (start = 0; start < 10; start++)
	{
		for (end=0; end < 10; end++)
		{
			_putchar((start * end) % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
