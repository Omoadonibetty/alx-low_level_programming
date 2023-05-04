#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer first element in the linked list
 * Workings
 * Return: data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *element;
	int tally;

	if (!head || !*head)
		return (0);

	tally = (*head)->n;
	element = (*head)->next;
	free(*head);
	*head = element;

	return (tally);
}
