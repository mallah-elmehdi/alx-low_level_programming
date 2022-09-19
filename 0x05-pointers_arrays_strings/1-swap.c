/**
 * swap_int - check the code
 * @n: pointer
 * @b: pointer
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
