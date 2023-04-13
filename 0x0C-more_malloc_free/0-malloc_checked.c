#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 *
 * @b: size in bytes.
 *
 * Return: pointer to allocated memory.
 *
 * if malloc fails, status is 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
