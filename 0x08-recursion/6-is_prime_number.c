#include "main.h"

/**
 *  is_prime_number - a function that returns 1 if the input
 *  integer is a prime number, otherwise return 0.
 *
 *  @n: the integer being checked
 *  Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num_checker(n, 2));
}

/**
 * prime_num_checker - a function that checks for prime numbers.
 *
 *  @n: the integer being checked
 *  @d: the current divisor to check
 *  Return: 1 if the num is prime,0 otherwise.
 */
int prime_num_checker(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime_num_checker(n, d + 1));

}
