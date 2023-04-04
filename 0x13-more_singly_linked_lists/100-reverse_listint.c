#include "main.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to a pointer to the head of the linked list
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
