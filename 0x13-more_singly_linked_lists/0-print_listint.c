#include "lists.h"

/**
 * print_listint - prints all elements in a linked list
 * @h: head of the link
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t c = 0;

	while (temp != NULL)
	{
	printf("%d\n", temp->next);
	c += 1;
	temp = temp->next;
	}
	return(c);
}
