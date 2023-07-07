/*Write a function that sets the value of a bit to 1 at a given index.
 *author : ECHHARRAD AHMED
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */
#include "main.h"
#include <stdio.h>
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
