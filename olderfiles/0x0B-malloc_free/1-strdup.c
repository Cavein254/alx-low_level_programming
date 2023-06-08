#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup- function that returns a pointer to a space
 * allocated space in memory
 * @str: pointer to a copy of a string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int x;
	unsigned int y;

	x = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		x++;
	}

	dest = malloc(sizeof(char) * (x + 1));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (y = 0; str[y] != '\0'; y++)
	{
		dest[y] = str[y];
	}
	return (dest);

}
