#include "main.h"
/**
 * _str_recursion - displays the length of a strings
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
