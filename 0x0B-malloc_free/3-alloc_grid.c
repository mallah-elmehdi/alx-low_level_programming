#include "main.h"

/**
 * alloc_grid - see the code
 * @width: param
 * @height: param
 *
 * Return: Something.
 */

int **alloc_grid(int width, int height)
{
	int **ret;
	int i;
	int j;

	i = 0;
	ret = malloc(sizeof(int *) * height);
	if (ret == NULL)
		return (NULL);
	while (i < height)
	{
		ret[i] = malloc(sizeof(int) * width);
		j = 0;
		if (ret[i] == NULL)
		{
			printf("ok\n");
			--i;
			while (i >= 0)
				free(ret[i--]);
			free(ret);
			return (NULL);
		}
		while (j < width)
			ret[i][j++] = 0;
		i++;
	}
	return (ret);
}
