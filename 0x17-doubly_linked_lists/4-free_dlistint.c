#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the pointer to the  head of the list
 * Return: zero at success
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
