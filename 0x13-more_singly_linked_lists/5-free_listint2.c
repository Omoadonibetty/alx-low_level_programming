#include "lists.h"

/**
 * free_listint2 - frees linked list
 * workings
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *element;

	if (head == NULL)
		return;

	while (*head)
	{
		element= (*head)->next;
		free(*head);
		*head = element;
	}

	*head = NULL;
}
