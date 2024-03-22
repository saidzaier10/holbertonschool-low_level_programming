#include "variadic_functions.h"
#include <stdarg.h>

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
		if (flag && (_putchar(','), _putchar(' '), 1))
			flag = 0;

		if (format[i] == 'c' && (_putchar(va_arg(args, int)), 1))
			flag = 1;
		else if (format[i] == 'i' && printf("%d", va_arg(args, int)))
			flag = 1;
		else if (format[i] == 'f' && printf("%f", va_arg(args, double)))
			flag = 1;
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

	va_end(args);
	_putchar('\n');
}
