#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x in smallcaps
 *
 * Return: This fn does not return anything
 */
void print_alphabet_x10(void)
{
	char p;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}


