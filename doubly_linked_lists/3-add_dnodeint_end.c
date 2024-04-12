#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Integer to be included in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/* Allocate memory for the new node */

	if (new_node == NULL) /* Check if memory allocation failed */
		return (NULL);

	new_node->n = n; /* Set the data for the new node */
	new_node->next = NULL; /* New node will be the last, so next is NULL */

	if (*head == NULL) /* Check if the list is empty */
	{
		new_node->prev = NULL; /* Set prev to NULL since it's the first node */
		*head = new_node; /* The list head now points to the new node */
		return (new_node);
	}

	while (last_node->next != NULL) /* Traverse to the last node */
		last_node = last_node->next;

	last_node->next = new_node; /* Last node's next points to the new node */
	new_node->prev = last_node; /* New node's prev points to the last node */

	return (new_node);
}
