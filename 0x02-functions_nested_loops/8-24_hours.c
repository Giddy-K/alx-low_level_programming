#include "main.h"

/**
 * jack_bauer - func the prints every minute of the day of Jack Bauer, starting form 00:00 to 23:59, min loop counts min, while hour loop counts hours and reset mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	_putchar('\n');

	minutes++;

	if (minutes == 60)
	{
	hours++;
	minutes = 0;
	}
	}
	}
}
