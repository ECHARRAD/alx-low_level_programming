/*Write a function that converts a binary number to an unsigned int.
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 * author : AHMED ECHARRAD
 */
#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b)
{
	unsigned int dawood;
	int ear;
	int bse_two;

	if (!b)
		return (0);
	dawood = 0;
	for (ear = 0; b[ear] != '\0'; ear++)
		;
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
