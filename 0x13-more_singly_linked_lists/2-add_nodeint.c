#include "lists.h"

/**
 * add_nodeint - adds a new node
 * at the begining of a linked list
 * @head: a pointer to the address of the
 * head of the linked list
 * @n: integer for the new node to contain
 *
 * Return: on success, address of the new element.
 * on error, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = *head;
	
	*head = newNode;
	
	return(newNode);
}
