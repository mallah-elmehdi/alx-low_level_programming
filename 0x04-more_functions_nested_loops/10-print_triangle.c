/**
 ** print_triangle - func
 ** @n: param
 **
 ** Return: void
 **/

void print_triangle(int n)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < n)
	{
		k = j + 1;
		i = n - k;
		while (k < n)
		{
			putchar(' ');
			k++;
		}
		while (i < n)
		{
			putchar('#');
			i++;
		}
		putchar('\n');
		j++;
	}
	if (n <= 0)
		putchar('\n');
}
