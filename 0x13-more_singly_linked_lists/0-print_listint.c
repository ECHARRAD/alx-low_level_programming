#nclude "lists.h"

/**
 * print_listint - prints list elements
 * @h: pointer to list
 * Return: number of nodes
 * Author: ECHARRAD AHMED
 * mibonacci: operand to store elements
 */

size_t print_listint(const listint_t *h);
{
	int mybirthday = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		mybirthday++;
	}
	return (mybirthday);
}
