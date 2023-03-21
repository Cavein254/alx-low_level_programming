#include "main.h"
/**
 * jack_bauer - that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: this function does not return anything
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int rem_mins;
	int rem_hrs;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			rem_hrs = hrs % 10;
			rem_mins = mins % 10;
			_putchar(hrs / 10 + '0');
			_putchar(rem_hrs + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(rem_mins + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
