#include "lists.h"
/**
 * listint_len - prints number of elements
 * @h: pointer to the list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
