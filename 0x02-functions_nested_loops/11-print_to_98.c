#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	int n;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i)
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
