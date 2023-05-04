#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Workings
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *element = head;

	while (element)
	{
		sum += element->n;
		element = element->next;
	}

	return (sum);
}
