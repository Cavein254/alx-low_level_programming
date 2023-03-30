#include 'main.h'
/**
 * _strncpy - similar to strncpy
 * @dest:The first string
 * @src: the second string
 * @n: number
 *
 * Return: Pointer to combined strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n  && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
