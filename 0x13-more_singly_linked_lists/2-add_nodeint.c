#include "lists.h"

/**
 * add_nodeint - adds node to start of list
 * @head: pointer to pointer to start
 * @n: value stored in mibonacci node
 * author : echarrad ahmed
 * Return: mibonacci node or NULL if failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mibonacci;

	mibonacci = (listint_t *) malloc(sizeof(listint_t));

	if (mibonacci == NULL)
	{
		free(mibonacci);
		return (NULL);
	}

	mibonacci->n = n;

	mibonacci->next = *head;
	*head = mibonacci;

	return (mibonacci);
}
