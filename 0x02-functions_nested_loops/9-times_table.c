#include "main.h"
/**
 * times_table - function that prints the 9 times table,
 * starting with 0.
 * Return: does not return anything
 */
void times_table(void)
{
	int init, mid, end;

	for (init = 0; init <= 9; init++)
	{
		_putchar(48);
		for (mid = 1; mid <= 9; mid++)
		{
			end  = init * mid;
			_putchar(44);
			_putchar(32);
			if (end <= 9)
			{
				_putchar(32);
				_putchar(end + 48);
			}
			else
			{
				_putchar((end / 10) + 48);
				_putchar((end % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
