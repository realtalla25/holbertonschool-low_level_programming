#include "main.h"

/*
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 * This function uses nested loops to iterate through each hour
 * and minute, formatting the output as hh:mm and printing it to
 * the standard output.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0'); /* tens place of hour */
			_putchar((hour % 10) + '0'); /* units place of hour */
			_putchar(':');                /* colon separator */
			_putchar((minute / 10) + '0'); /* tens place of minute */
			_putchar((minute % 10) + '0'); /* units place of minute */
			_putchar('\n');              /* new line */
		}
	}
}

