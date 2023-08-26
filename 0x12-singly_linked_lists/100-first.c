#include <stdio.h>
#include "lists.h"

/**
 * first - print the specified lines.
 * Function is executed
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I carry my house upon my back!\n");
}
