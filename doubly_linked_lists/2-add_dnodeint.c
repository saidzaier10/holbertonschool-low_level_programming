#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Integer to be included in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/* Allocate memory for node */

	if (new_node == NULL) /* Check if memory allocation failed */
		return (NULL);

	new_node->n = n; /* Set node data */
	new_node->prev = NULL; /* Set prev pointer of the new node */
	new_node->next = *head; /* New node points to the former first node */

	if (*head != NULL) /* If the list isn't empty */
		(*head)->prev = new_node; /* Former first node points back to new node */

	*head = new_node; /* Head points to the new node */

	return (new_node);
}
