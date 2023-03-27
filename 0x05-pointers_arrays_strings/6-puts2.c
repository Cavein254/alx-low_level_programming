#include "main.h"
/**
 * puts2 - skips one character and prints the other
 * @str: variable containing the string
 *
 * Return: This function does not return
 */
void puts2(char *str)
{
	char *pstr = str;
	int i;

	for (i = 0; pstr[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(pstr[i]);
		}
	}
	_putchar('\n');
}
