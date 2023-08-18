#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Display various types of arguments.
 * @format: A list of types representing the arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *str;

	va_list arguments_all;

	va_start(arguments_all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments_all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments_all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments_all, double));
					break;
				case 's':
					str = va_arg(arguments_all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}

	printf("\n");
	va_end(arguments_all);

}
