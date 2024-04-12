#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a node at a given position in a list.
* @h: Double pointer to the start of the list.
* @idx: Index where the new node should be added, starting at 0.
* @n: New node's data.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	unsigned int index = 0;

	if (idx == 0) /* Special case: insert at the start */
		return (add_dnodeint(h, n));

	while (temp != NULL && index < idx - 1) /* Find the position before idx */
	{
		temp = temp->next;
		index++;
	}

	if (temp == NULL && idx != 0) /* If idx is out of range */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for the new node */
	if (new_node == NULL) /* Check memory allocation success */
		return (NULL);

	new_node->n = n; /* Set new node data */

	/* Insert new_node into the list */
	new_node->next = temp->next; /* New node points to current node's next */
	new_node->prev = temp; /* New node's prev points to current node */

	if (temp->next != NULL) /* If inserting not at the end of the list */
		temp->next->prev = new_node; /* Next node's prev points to new node */
	temp->next = new_node; /* Current node's next points to new node */

	return (new_node);
}
