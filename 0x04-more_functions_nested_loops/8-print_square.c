/**
 ** print_square - func
 ** @n: param
 **
 ** Return: void
 **/

void print_square(int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
