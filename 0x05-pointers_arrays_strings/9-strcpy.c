#include "main.h"
#include <stdio.h>
/**
 * _strcpy - prints n elements of an array of integers
 * @src: The original array
 * @dest: The array being copyed
 *
 * Return: character pointer to the string
 */
char *_strcpy(char *dest, char *src)
{
	char *pdest = dest;
	char *psrc = src;
	int i;

	for (i = 0; psrc[i] != '\0'; i++)
	{
		pdest[i] = psrc[i];
	}
	return (pdest);
}
