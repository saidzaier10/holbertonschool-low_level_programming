#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the first node of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL) /* Loop through the list */
	{
		node = head; /* Point to the current node */
		head = head->next; /* Move to the next node */
		free(node); /* Free the current node */
	}
}
