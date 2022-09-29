#include "main.h"

/**
 * check_prime - check the code
 * @n: param
 * @i: param
 *
 * Return: something
 */

int check_prime(int i, int n)
{
	if (i > 1 && i < n && n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	return check_prime(i + 1, n);
}

/**
 * is_prime_number - check the code
 * @n: param
 *
 * Return: something
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(1, n));
}
