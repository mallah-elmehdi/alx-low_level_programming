#include "main.h"

/**
 * get_pow - check the code
 * @num: param
 *
 * Return: ...
 */

unsigned long int get_pow(unsigned long int num)
{
	unsigned long int pow = 1;

	while (pow * 2 <= num)
		pow *= 2;
	return (pow);
}

/**
 * flip_bits - check the code
 * @m: param
 * @n: param
 *
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numB = n > m ? n : m;
	unsigned long int numS = n > m ? m : n;
	unsigned long int pow = get_pow(numB);
	unsigned long int temp;
	unsigned int i = 0;

	if (numS != 1 && numB - numS == 1)
		return (1);
	while (numB != numS)
	{
		numB -= pow;
		if (numB < numS)
		{
			temp = numB;
			numB = numS;
			numS = temp;
		}
		pow = get_pow(numB);
		i++;
	}
	return (i);
}
