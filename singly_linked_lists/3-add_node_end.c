#include "lists.h"

/**
* _strlen - function that count the length of a string
* @string: the string that be checked
*
* Return: the length of the string
*/
int _strlen(const char *string)
{
	int length = 0;

	/* Increment length for each character until a null byte is encountered */
	while (string[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
* *add_node_end - function that adds a new node at the end of a list_t list
* @head: pointer of pointer to the start of the list
* @str: a string to add to the beginning of the list
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Pointer to the newly allocated node */
	list_t *current; /* Temporary pointer to traverse the list */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* Check if allocation was successful */
	{
		return (NULL);
	}

	/* Duplicate the string and calculate its length */
	new_node->str = strdup(str);
	if (new_node->str == NULL) /* Check if string duplication was successful */
	{
		free(new_node); /* Free the newly allocated node on failure */
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL; /* The new node will be the last, so next is NULL */

	if (*head == NULL) /* Check if the list is empty */
	{
		*head = new_node; /* The new node becomes the head of the list */
	}
	else
	{
		/* Traverse the list to find the last node */
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node; /* Append the new node at the end of the list */
	}

	return (new_node); /* Return the newly added node */
}
