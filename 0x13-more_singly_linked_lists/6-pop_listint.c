#include "lists.h"

/**
 * pop_listint - deletes the head of a 
 * linked list and returns its data
 * @head: pointer to the head of a linked list
 *
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (*head == NULL)
return (0);

popped = *head;
content = popped->n;
free(popped);

*head = (*head)->next;
return (content);
}
