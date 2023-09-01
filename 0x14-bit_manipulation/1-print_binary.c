#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int c_bit;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		c_bit = n >> i;
		if (c_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	 if (!count)
		 _putchar('0');
}
