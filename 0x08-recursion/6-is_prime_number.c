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

	if (i == 0)
		i++;
	else if (n < 0 || (i < n && n % i == 0))
		return (0);
	else if (i < n)
	{
		i++;
		printf("[%d]\n", i);
		is_prime_number(n);
	}
	return (1);
}
