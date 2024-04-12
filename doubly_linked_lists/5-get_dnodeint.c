#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
* @head: Pointer to the head of the list.
* @index: Index of the node, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node doesn't exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index) /* Traverse until the nth node or end */
	{
		head = head->next;
		count++;
	}
	if (head == NULL || count < index) /* Check if the node was found */
		return (NULL);

	return (head); /* Return the found node */
}
