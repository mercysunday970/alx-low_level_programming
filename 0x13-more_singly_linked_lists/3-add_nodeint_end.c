#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * of a linked list
 * @head: pointer to the head of a
 * linked list
 * @n: integer to contain the node content
 *
 * Return: on success, address of the new element
 * on error, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *mid = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (mid != NULL)
	{
		while (mid->next != NULL)
			mid = mid->next;

		mid->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
