#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to the function responsible for printing.
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
