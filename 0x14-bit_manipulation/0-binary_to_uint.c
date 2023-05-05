#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * author: echarraD AHMED
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dawood;
	int ear;
	int bse_two;

	if (!b)
		return (0);
	dawood = 0;
	for (ear = 0; b[ear] != '\0'; ear++);
	for (ear--, bse_two = 1; ear >= 0; ear--, bse_two *= 2)
	{
		if (b[ear] != '0' && b[ear] != '1')
		{
			return (0);
		}

		if (b[ear] & 1)
		{
			dawood += bse_two;
		}
	}
	return (dawood);
}
