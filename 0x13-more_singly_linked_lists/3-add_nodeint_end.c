#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of list
 * @head: pointer to pointer to beginning of list
 * @n: integer
 * Return: address of new node, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	if (head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	lastNode = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
