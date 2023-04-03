#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:the initial string
 * @accept: the number of bytes to be returned
 *
 * Return: size of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		i++;
	}
	return (count - 2);
}
