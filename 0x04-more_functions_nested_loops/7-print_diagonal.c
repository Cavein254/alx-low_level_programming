#include "main.h"
/**
 * print_diagonal - prints a straignt line inside terminal
 * @n : number of times the line is to be printed
 *
 * Return :  does not return
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			a = i;
			while (a != 0)
			{
				_putchar(' ');
				a--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
