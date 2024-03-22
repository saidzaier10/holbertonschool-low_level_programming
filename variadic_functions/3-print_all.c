#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: list of arguments passed to the function
*
* Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	char c;

	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(args);
}
