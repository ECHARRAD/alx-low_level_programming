/*Write a function that prints the binary representation of a number.
 *
 * Prototype: void print_binary(unsigned long int n);
 * Format: see example
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * author: ECHARRAD AHMED
 */
#include "main.h"

/**
 *  * print_binary - prints the binary representation
 *   * of a number.
 *    * @n: unsigned long int.
 *     * author :ahmed echarrad
 *      * Return: no return.
 *       */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
