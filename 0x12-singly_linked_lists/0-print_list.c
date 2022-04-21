#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
