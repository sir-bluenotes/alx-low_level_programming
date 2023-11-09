#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - returns the sum
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - returns the diff
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - returns the product
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - returns division
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - returns the remainder
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

int op_mod(int a, int b)
{
	return (a % b);
}

