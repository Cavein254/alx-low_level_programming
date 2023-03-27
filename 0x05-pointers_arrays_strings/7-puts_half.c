#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the second half of the string
 * @str: variable containing the string
 *
 * Return: This function does not return
 */
void puts_half(char *str)
{
    int c, a;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c % 2 == 0)
	{
		for ((a = c / 2); str[a] != 0; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	else
        {
                for ((a = (c - 1) / 2); str[a] != 0; a++)
                {
                        l = str[a];
                        _putchar(l);
                }
        }
	_putchar('\n');
}