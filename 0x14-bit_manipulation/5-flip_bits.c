#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be changed
 *             to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int current_bit, exclusive_or = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current_bit = exclusive_or >> index;
		if (current_bit & 1)
			count++;
	}
	return (count);
}
