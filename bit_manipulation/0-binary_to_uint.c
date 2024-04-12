#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Pointer to a string of 0 and 1 chars
*
* Return: The converted number, or 0 if the string contains non-binary
* characters or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0; /* Variable to store the final number */

	/* Check if input is NULL */
	if (b == NULL)
		return (0);

	/* Loop through each character in the string */
	while (*b)
	{
		/* Left shift num by 1 bit to make space for the next bit */
		num <<= 1;

		/* Check if the current character is '1' */
		if (*b == '1')
			num += 1;
		/* Check if the character is neither '0' nor '1' */
		else if (*b != '0')
			return (0);

		/* Move to the next character */
		b++;
	}

	return (num); /* Return the converted number */
}
