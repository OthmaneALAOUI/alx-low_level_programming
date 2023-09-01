#include "main.h"

/**
 * get_endianness - Checks if the current machine uses little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte = (char *)&n;

	return (byte);
}
