#include "main.h"
/**
 * _puts - prints a single character at a time
 * @str: A string
  * Return: This function does not return
 */
void _puts(char *str)
{
	char *ps = str;

	while (*ps != '\0')
	{
		_putchar(*ps);
		*ps++;
	}
	_putchar('\n');
}

