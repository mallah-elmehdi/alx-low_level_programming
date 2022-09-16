/**
 ** print_diagonal - func
 ** @n: param
 **
 ** Return: void
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
