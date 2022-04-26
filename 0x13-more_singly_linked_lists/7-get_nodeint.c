#include "lists.h"
/**
 * get_nodeint_at_index - returns the node
 * @head: head of node
 * @index: the index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	if (node == NULL)
		return (NULL);
	while (i != index)
	{
		node = node->next;
		i++;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
