#include "main.h"
/**
** _puts_recursion - Prints a string with an new line
** @s: pointer to a character
**
** Return: This function does not return
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\n')
	{
		return;
	}
	_putchar(s[i]);
	i++;

	char *pn = &s[i];

	_puts_recursion(pn);
}
