#include "main.h"
/**
 * _rev_string - determines the length of the string
 * @s: variable containing the string
 *
 * Return: length of the string
 */
void rev_string(char *s)
{
    char *pstr = s;
	int counter = 0;
	int i;
	int j;

	for (i = 0; pstr[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = counter; j > 0; j--)
	{
		_putchar(pstr[j]);
	}
	_putchar('\n');
}