#include "lists.h"

/**
* dlistint_len - returns the number of elements in a list
* @h: pointer to header
* Return: nbr of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
