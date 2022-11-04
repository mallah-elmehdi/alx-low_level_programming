#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	int i = 0;
	unsigned long t1 = 0, t2 = 1;
	unsigned long nextTerm = 0;

	while (i < 1)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (i)
			printf("%lu", nextTerm);
		if (i + 1 != 1 && i)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
