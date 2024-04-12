#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list_t list.
*
* Description: Iterates over each node of a singly linked list
* of type list_t, and prints the string contained in each node,
* followed by the length of the string. If the string is NULL,
* the function prints `[0] (nil)`. The function traverses the
* list until the end is reached.
*
* Return: The total number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 0; /* Node counter */
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str == NULL) /* Check if the string is NULL */
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", current_node->len, current_node->str);
		}

		current_node = current_node->next; /* Move to the next node in the list */
		node_count++; /* Increment node counter */
	}

	return (node_count);
}
