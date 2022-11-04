#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	int is_not_fisrt = 0;
	long t1 = 0, t2 = 1;
	long nextTerm = 0;

	while (1)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (nextTerm > 4000000)
			break;
		if (nextTerm % 2 == 0)
		{
			if (is_not_fisrt)
				printf(", ");
			printf("%ld", nextTerm);
			is_not_fisrt = 1;
		}
	}
	printf("\n");
	return (0);
}
