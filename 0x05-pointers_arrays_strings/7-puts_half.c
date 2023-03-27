#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the second half of the string
 * @str: variable containing the string
 *
 * Return: This function does not return
 */
void puts_half(char *str)
{
    char *sptr = str;
    int i, j, k;
    int counter = 0;

    for (i = 0; sptr[i] != '\0'; i++)
    {
        counter++;
    }

    if (counter % 2 == 0)
    {
        for (j = (counter / 2); j <= counter; j++)
        {
            _putchar(sptr[j]);
        }
        _putchar('\n');
    }
    else
    {
        for (k = ((counter + 1) / 2); k <= counter; k++)
        {
            _putchar(sptr[k]);
        }
        _putchar('\n');
    }
    printf("counter %d", counter);
}