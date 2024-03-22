#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers.
* @n: number of integers passed to the function.
*
* Description: This function prints each number followed by the separator.
* If separator is NULL, it is not printed. A newline is printed at the end.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers; /* list for variable number of arguments */
	unsigned int i = 0; /* loop counter */

	/* initialize va_list to iterate through arguments */
	va_start(numbers, n);

	/* iterate over each argument, printing all separators before last value */
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	/* clean up va_list */
	va_end(numbers);

	printf("\n");
}
