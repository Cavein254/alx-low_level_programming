#include "main.h"
/**
 * print_triangle - draws triangles
 * @n  :  n or height
 *
 * Return : does not return
 */
void print_triangle(int n)
{
	int x, y = 0;
	int space;

	if (n > 0)
	{
		while (y < n)
		{
			space = n - y - 1;
			while (x < n)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
