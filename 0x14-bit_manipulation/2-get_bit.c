#include "main.h"
#include <stdio.h>
/*Write a function that returns the value of a bit at a given index.
 *
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
