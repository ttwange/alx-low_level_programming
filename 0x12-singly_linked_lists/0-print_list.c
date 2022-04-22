#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: pointer to the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
