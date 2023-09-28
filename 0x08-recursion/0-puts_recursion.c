#include "main.h"
/**
** _puts_recursion - Prints a string with an new line
** @s: pointer to a character
**
** Return: This function does not return
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
