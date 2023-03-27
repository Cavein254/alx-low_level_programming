#include "main.h"
/**
 * _puts - prints a single character at a time
 * @str: A string
  * Return: This function does not return
 */
void _puts(char *str)
{
	char *ps = str;
	int i;

	for (i = 0; ps[i] != '\0'; i++)
	{
		_putchar(ps[i]);
	}
	_putchar('\n');
}

