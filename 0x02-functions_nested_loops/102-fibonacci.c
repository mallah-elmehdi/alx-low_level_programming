#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	int i = 0;
	long t1 = 0, t2 = 1;
	long nextTerm = 0;

	while (i < 50)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (i)
			printf("%ld", nextTerm);
		if (i + 1 != 50 && i)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
