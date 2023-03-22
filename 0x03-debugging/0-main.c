#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - test if an int is +ve or -ve
 * @n : parameter with the integet to be tested
 * Return: does not return
 */

void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	else
	{
		printf("%d is positive \n", n);
	}
}
