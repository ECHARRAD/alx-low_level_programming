#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: the start of the list
 * @n: what must be done
 * Return: the value of the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mibonacci;
	listint_t *old;

	if (head == NULL)
		return (NULL);
	mibonacci = malloc(sizeof(listint_t));
	if (!mibonacci)
		return (NULL);
	mibonacci->n = n;
	mibonacci->next = NULL;
	if (!*head)
		*head = mibonacci;
	else
	{
		old = *head;

		while (old->next)
			old = old->next;

		old->next = mibonacci;
	}
	return (mibonacci);
}

