#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main- prints two multiplied args
 *@argc: number of args
 *@argv: arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("Product:%d\n Args: %d %d", result, num1, num2);
		return (0);
	}
}
