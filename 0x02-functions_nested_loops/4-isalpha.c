#include "main.h"
/**
 * _isalpha - checks if a value is upper or lower case
 * @c:  a parameter that is to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
