#include "lists.h"
/**
 * free_listint - frees the list
 * @head: beginning node
 * return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
