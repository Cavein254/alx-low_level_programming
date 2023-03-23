#include "main.h"
/**
 * print_line - prints a straignt line inside terminal
 * @n : number of times the line is to be printed
 *
 * Return :  does not return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
