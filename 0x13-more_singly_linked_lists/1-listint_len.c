#include "lists.h"

/**
 * listint_len - function that returns the length of a list
 * mibonacci: operand
 * author : ahmed echarrad
 * @h: parameter
 * Return: the number of noides
 */

size_t listint_len(const listint_t *h)
{
	int mibonacci = 0;

	while (h)
	{
		mibonacci++;
		h = h->next;
	}
	return (mibonacci);
}
