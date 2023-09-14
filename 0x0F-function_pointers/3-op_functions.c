#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that adds two integers.
 *
 * @a: first integer.
 * @b: the second integer.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers.
 *
 * @a: first integer.
 * @b: the second integer.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplys two integers.
 *
 * @a: first integer.
 * @b: the second integer.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers.
 *
 * @a: first integer.
 * @b: the second integer.
 *
 * Return: the division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that gives the modulo of two integers.
 *
 * @a: first integer.
 * @b: the second integer.
 *
 * Return: the remainder of the  division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
