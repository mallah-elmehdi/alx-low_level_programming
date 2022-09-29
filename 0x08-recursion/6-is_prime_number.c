#include "main.h"

/**
 * is_prime_number - check the code
 * @n: param
 *
 * Return: something
 */

int is_prime_number(int n)
{
	static int i;

	if (i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
		is_prime_number(n);
	}
	return (1);
}
