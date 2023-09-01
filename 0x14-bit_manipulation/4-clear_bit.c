#include "main.h"

/**
 * clear_bit - Sets the value of a specific bit at the given index to 0.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1UL << index));
	return (1);
}
