#include "main.h"

/**
 * _puts_recursion - print a string.
 * @str: is a poinetr to char
 * Return: No.
 */

void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
	{
		_putchar('\n');
	}
}
