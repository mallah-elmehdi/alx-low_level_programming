#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	int i = 2;
	long t1 = 0, t2 = 1;
	long nextTerm = t1 + t2;

	while (i < 50)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		printf("%ld", nextTerm);
		i++;
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
