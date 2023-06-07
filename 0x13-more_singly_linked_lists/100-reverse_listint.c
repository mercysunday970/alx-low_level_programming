#include "lists.h"

/**
 * reverse_listint - reverses the node of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the first node of the reversed
 * linked list
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
