#include "lists.h"

/**
 * free_listint - frees linked list
 * Workings
 * @head: listint_t list be freed
 */
void free_listint(listint_t *head)
{
	listint_t *element;

	while (head)
	{
		element = head->next;
		free(head);
		head = element;
	}
}
