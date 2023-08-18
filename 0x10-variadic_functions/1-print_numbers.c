#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Display numbers, followed by a newline.
 * @separator: The string to be printed between numbers.
 * @n: The count of integers provided.
 * @...: A variable sequence of numbers to be displayed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments_num;
	unsigned int i;

	va_start(arguments_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments_num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments_num);
}
