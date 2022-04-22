#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: pointer to the list
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
