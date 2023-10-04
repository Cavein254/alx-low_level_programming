#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- function that concatenates two strings
 * @s1: the first version of the string
 * @s2: the second part of the string
 * Return: 0 for success
 */
char *str_concat(char *s1, char *s2)
{
	char *comb;
	int x, y;

	x = 0;
	y = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	comb = malloc(sizeof(char) * (x + y + 1));
	if (comb == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		comb[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		comb[x] = s2[y];
		x++, y++;
	}
	comb[x] = '\0';
	return (comb);
}
