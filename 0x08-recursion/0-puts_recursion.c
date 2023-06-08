#include "main.h"
/**
 * _puts_recursion - cycles through a sentence and prints characters
 *@ *s: pointer to the value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putschar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
