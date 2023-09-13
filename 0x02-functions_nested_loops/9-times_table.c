#include "main.h"
#include <stdio.h>
/**
*times_table-prints 9 times table
*Return: 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d, ", result);
				if (j != 9)
					printf(", ");
			}
			printf("%2d, ", result);
		}
		printf("\n");
	}
}
