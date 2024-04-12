#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node at a specified index.
* @head: Pointer to the pointer to the head of the list.
* @index: The index of the node that should be deleted. Indexation starts at 0.
*
* Description: This func traverses a doubly linked list to a specified index
* and deletes the node at that index. It handles special cases such as deleting
* at the head of the list and ensures the integrity of the list by properly
* updating the adjacent nodes' pointers. The function returns 1 upon success,
* or -1 if the operation fails (e.g., if the list is empty or the given index
* is out of bounds).
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head; /* Temporary pointer to traverse the list */
	unsigned int index_node = 0; /* Counter to track the current index */

	/* Handle case where list is empty */
	if (temp == NULL)
		return (-1);

	/* Handle case where the node to be deleted is the first node */
	if (index == 0)
	{
		*head = temp->next; /* Move head to next node */
		if (*head != NULL)
			(*head)->prev = NULL; /* Set new head's prev to NULL */

		free(temp); /* Free the old head */
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (index_node < index && temp != NULL)
	{
		temp = temp->next;
		index_node++;
	}

	/* Check if index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Update the next pointer of the previous node */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	/* Update the previous pointer of the next node, if it exists */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp); /* Free the node to be deleted */
	return (1);
}
