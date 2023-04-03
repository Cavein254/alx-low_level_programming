#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string
 * @haystack: The full string
 * @needle: The string being searched
 *
 * Return: A pointer or Null
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
