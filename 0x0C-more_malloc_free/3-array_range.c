#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates int array.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to new array.
 * If max < min, returns NULL.
 * If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (max < min)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
