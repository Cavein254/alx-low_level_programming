#include "main.h"
/**
 ** _strlen_recursion - this function returns the length
 ** of a given string
 ** @s : pointer to provided string
 **
 ** Return: The length of the given string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	return (len + _strlen_recursion(s + 1));
}
