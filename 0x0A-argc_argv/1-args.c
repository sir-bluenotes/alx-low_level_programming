#include <stdio.h>

/**
*main - prints arguments
*@argv: num arguments
*@argc:argument pointer
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
