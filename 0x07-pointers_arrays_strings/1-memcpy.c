#include "main.h"
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @dest : the location where memory wxll be copied to
 * @src : the area in memory where the memory is
 * @n : the number of bytes
 *
 * Return:dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
