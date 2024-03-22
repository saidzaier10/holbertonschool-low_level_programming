#include "variadic_functions.h"

/**
* print_all - Prints anything based on the format provided
* @format: A string composed of the types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, flag = 0;

	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (flag)
			printf(", ");

		if (format[i] == 'c')
			printf("%c", va_arg(args, int)), flag = 1;
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int)), flag = 1;
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double)), flag = 1;
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			flag = 1;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
