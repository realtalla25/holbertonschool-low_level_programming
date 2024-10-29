#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be checked.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);  /* Return the negated value if n is negative */
	else
		return (n);   /* Return n if it's already non-negative */
}

