#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
 * string_nconcat- Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes added to s1 from s2
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;
	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;
	if (n < str2)
		s = malloc(sizeof(char) * (str1 + n + 1));
	else
		s = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!s)
		return (NULL);
	while (i < str1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n >= str2 && i < (str1 + str2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
