#include "lists.h"
/**
 * free_list - it frees list from memory
 * @head: pointer to the beginning of first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
