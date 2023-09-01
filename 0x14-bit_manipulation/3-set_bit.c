#include "main.h"

/**
 * set_bit - Sets a specific bit at the given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | 1UL << index);
	return (1);
}
