#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of linked list
 * @h: linked list showing type listint_t to be printed
 * Workings
 * Return: showing no.of  nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
		while (h)
{
	printf("%d\n", h->n);
		elements++;
		h = h->next;
}
return (elements);
}
