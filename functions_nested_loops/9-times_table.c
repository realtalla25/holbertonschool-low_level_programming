#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				/* First number in the row, print without leading space */
				printf("%d", product);
			}
			else
			{
				/* For subsequent numbers, print a comma and space */
				printf(", %d", product);
			}
		}
		/* Newline after each row */
		printf("\n");
	}
}
