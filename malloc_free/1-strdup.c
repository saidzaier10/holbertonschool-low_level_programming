#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer
*           to a newly allocated space in memory
* containing a copy of the string given as a parameter.
* @str: input string to duplicate
*
* Return: Pointer to the duplicated string or NULL if str is NULL or if
* memory allocation fails.
*/
char *_strdup(char *str)
{
	char *duplicate;

	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		for (i = 0; i <= length; i++)
			duplicate[i] = str[i];

		return (duplicate);
	}

	return (NULL);
}
