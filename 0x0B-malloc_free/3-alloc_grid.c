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
	ret = malloc(sizeof(int *) * height + 1);
	if (ret == NULL)
		return (NULL);
	while (i < height)
	{
		ret[i] = malloc(width + 1);
		j = 0;
		if (ret == NULL)
		{
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
	ret[i] = NULL;
	return (ret);
}
