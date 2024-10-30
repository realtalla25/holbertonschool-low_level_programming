#include "main.h"
#include <unistd.h>

void print_number(int n);
void times_table(void);

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j != 0)
			{
				write(1, ", ", 2);  /* Write comma and space */
			}
			print_number(product);  /* Write the number */
		}
		write(1, "\n", 1);  /* Write a newline at the end of each row */
	}
}

/**
 * print_number - Prints an integer as a string.
 * @n: The integer to print.
 */
void print_number(int n)
{
	char buffer[12];  /* Buffer to hold the string representation of numbers */
	int i = 0, negative = 0;

	if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	/* Convert number to string */
	do {
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	} while (n > 0);

	if (negative)
	{
		buffer[i++] =
