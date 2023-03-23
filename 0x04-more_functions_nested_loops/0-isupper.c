#include "main.h"
/**
 * _isupper - function that test if a number is upper case or not
 * @c:a character to be tested
 * Return  - 0 or 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
