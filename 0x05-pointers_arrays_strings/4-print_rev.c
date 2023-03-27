#include "main.h"
/**
 * print_rev - A function to reverse a string
 * @s: A string
 * Return: This function does not return
 */
void print_rev(char *s)
{
	char *pstr = s;
	int counter = 0;
	int i;
	int j;

	for (i = 0; pstr[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = counter - 3; j >= 0; j--)
	{
		_putchar(pstr[j]);
	}
	_putchar('\n');
}
