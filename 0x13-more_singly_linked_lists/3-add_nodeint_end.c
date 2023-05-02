#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the firstelement in the list
 * @n: data to insert in the newelement
 * Workings
 * Return: pointer to newELement node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *endnote = *head;

	new = malloc(sizeof(listint_t));
	if (!newElemet)
		return (NULL);

	newElement->n = n;
	newElement->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (newElement);
	}

	while (endnote->next)
		endnote = endnote->next;

	endnote->next = newElement;

	return (newElement);
}
