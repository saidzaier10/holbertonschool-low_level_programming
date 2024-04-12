#include "lists.h"

/**
 * list_len - return the numbers of elements in a linked list
 * @h: pointer to the head
 * Return: numbers of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
