#include "main.h"
#include <stddef.h>
/**
 * _strchr -  function that locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the character or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
