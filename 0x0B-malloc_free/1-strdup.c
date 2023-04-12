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

	x = _strlen(str);
	dest = (char *) malloc(x *sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}

	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dest);
	return (dest);
}
