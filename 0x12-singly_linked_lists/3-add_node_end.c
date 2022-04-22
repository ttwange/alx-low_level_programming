#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node to the end of list
 * @head: pointer to pointer to starting node
 * @str: string in node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
