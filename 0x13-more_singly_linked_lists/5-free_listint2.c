#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to pointer to start of list
 * return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
