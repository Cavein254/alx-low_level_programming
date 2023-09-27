#include "main.h"
#include <unistd.h>

/**
** _putchar - A function that writes c to stdout
** @c: a character for printing
**
** Return: O if successful
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
