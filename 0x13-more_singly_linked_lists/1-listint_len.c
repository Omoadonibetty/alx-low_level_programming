#include "lists.h"
/**
 * listint_len - Returns number of elements in a linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 * Workings
 * Return:number of elements in listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
