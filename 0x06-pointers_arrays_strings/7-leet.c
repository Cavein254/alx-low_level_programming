#include "main.h"
/**
 * leet - unction that encodes a string into 1337
 * @s: given input
 *
 * Return: character encodings
 */
char *leet(char *s)
{
	int i;
	int j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
	}
	return (n);
}
