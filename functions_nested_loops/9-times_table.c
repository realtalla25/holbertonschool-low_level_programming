#include "main.h"
#include <stdio.h>

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
