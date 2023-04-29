#include "lists.h"


/**
 * free_listint - frees a linked list
 * @head: start of linked list
 * Return: void
 */

void free_listint(listint_t *head);
{
	listint_t *X;
	listint_t *Z;

	X = head;

	while (X != NULL)
	{
		Z = X->next;
		free(X);
		X = Z ;
	}
}
