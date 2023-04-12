#include <stdio.h>
#include <stdlib.h>
/**
 *create_array- a function that creates an array of chars
 *@size: the size of the array
 *@c: the characters
 *Return: NULL if size=0
 */
char *create_array(unsigned int size, char c)
{
	char *len;
	unsigned int x;

	len = malloc(sizeof(char)  * size);
	if (len == NULL || size == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		len[x] = c;
	}
	return (len);
}
