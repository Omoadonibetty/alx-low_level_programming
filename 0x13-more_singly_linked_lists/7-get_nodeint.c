#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node linked list
 * @index: index node to return
 * Workings
 * Return: pointer node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *element = head;

	while (element && i < index)
	{
		element = element->next;
		i++;
	}

	return (element ? element : NULL);
}
