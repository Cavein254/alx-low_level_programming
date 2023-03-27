#include "main.h"
/**
 * _strlen - determines the length of the string
 * @s: variable containing the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	char *ps = s;
	int count;
	int length = 0;

	for (count = 0; ps[count] != '\n'; count++)
	{
		length++;
	}

	return  (count - 3);
}
