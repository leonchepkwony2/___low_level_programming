#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the matrix (Success)
 * or NULL error
 */
int **alloc_grid(int width, int height)
{
	int **me;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	me = malloc(sizeof(int) * height);
	if (me == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		me[i] = (int *) malloc(sizeof(int) * width);
		if (me[i] == NULL)
		{
			free(me);
			for (j = 0; j <= i; j++)
				free(me[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			me[i][j] = 0;
		}
	}
	return (me);
}
