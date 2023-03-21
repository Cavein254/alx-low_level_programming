#include "main.h"
/**
 * print_alphabet -  print alphabet in smallcaps
 *
 * Return: The program has no return value
 */
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
