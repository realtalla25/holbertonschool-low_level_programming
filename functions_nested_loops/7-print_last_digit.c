#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Get the absolute value of n to handle negative numbers */
	if (n < 0)
		n = -n;

	last_digit = n % 10;  /* Calculate last digit */
	_putchar('0' + last_digit); /* Print the last digit */

	return (last_digit); /* Return the last digit with parentheses */
}

