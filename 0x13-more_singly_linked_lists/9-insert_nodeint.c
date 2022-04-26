#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to beginning of list
 * @idx: the index
 * @n: the data
 * Return: address of newnode or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	temp = *head;
	for (; i < idx - 1; i++)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	free(temp);
	return (newNode);
}
