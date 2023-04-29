#include "lists.h"

/**
 * print_listint - function that prints the elements of a list
 * mibonacci: operand to store the elements
 * @h: parameter
 * Return: the number of noides
 */

size_t print_listint(const listint_t *h)
{
	int mibonacci = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		mibonacci++;
	}
	return (mibonacci);
}
