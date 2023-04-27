#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates array memory.
 * @nmemb: number of elements.
 * @size: size in bytes.
 * Return: pointer to allocated memory.
 * If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
