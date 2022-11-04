#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	long t1 = 0, t2 = 1;
	long nextTerm = 0;
	long sum = 0;

	while (1)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (nextTerm % 2 == 0)
		{
			if (nextTerm + sum >= 5000000)
			{
				printf("%ld", sum);
				break;
			}
			sum += nextTerm;
		}
	}
	printf("\n");
	return (0);
}
