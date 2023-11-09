#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - Returns sum of all parameters
*@n: number of parameters
*@...: variable number of arguments
*Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
