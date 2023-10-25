#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: an integer
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - a function to calculate the sqrt
 *
 * @n: the integer we find sqrt for
 * @x: integer values of guesses
 *  Return: the root of n
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_sqrt(n, x + 1));
}
