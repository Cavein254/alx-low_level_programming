#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s:The pointed memory area
 * @b:The constant byte to fill the memory area
 * @n:The memory area to be filled
 *
 * Return:A pointer to the value s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
