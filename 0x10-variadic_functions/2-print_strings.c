#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Display strings, followed by a newline.
 * @separator: The string to be printed between strings.
 * @n: The count of strings provided.
 * @...: A variable sequence of strings to be displayed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If any of the strings is NULL, (nil) is displayed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments_str;
	char *str;
	unsigned int i;

	va_start(arguments_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments_str, char *);

		if (arguments_str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
