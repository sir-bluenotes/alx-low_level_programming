#include "main.h"
/**
*_abs - computes the absolute integer of a number
*@a: integer parameter
*Return: a or -a
*/
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{	
		return (a);
	}
	return (0);
}
