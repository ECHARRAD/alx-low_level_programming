#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to an array of integers.
*/
int **alloc_grid(size_t width, size_t height)
{
	int **gridout;
	size_t i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(gridout[j]);
			free(gridout);
			return (NULL);
		}
	}
	return (gridout);
}





