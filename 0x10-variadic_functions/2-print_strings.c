#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - prints strings
*@separator: the strings between strings
*@n: number of passed strings
*@...: variable number of strings to be printed
*if separator is null n/a is printed
*if one of the strings is null then nil
*is printed
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
