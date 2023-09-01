#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit (0 or 1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
