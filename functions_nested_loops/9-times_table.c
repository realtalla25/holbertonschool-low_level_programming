#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * This function prints the 9 times table in a formatted manner,
 * with each row corresponding to the products of 9 with numbers
 * from 0 to 9.
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
				printf(", ");
			}
			printf("%d", product);
		}
		printf("\n");
	}
}
