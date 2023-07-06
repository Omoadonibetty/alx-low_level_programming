#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning of listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Workings
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newElement;

	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (NULL);

	newElement->n = n;
	newElement->next = *head;

	*head = newElement;

	return (newElement);
}
