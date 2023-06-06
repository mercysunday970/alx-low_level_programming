#include "lists.h"

/**
 * listint_len - prints the
 * number of elements in  linked list
 * @h: head of list
 *
 * Retuurn: the number of elements
 * in a liked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
