#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterate through an array and apply a given function.
 * @array: The array to iterate through.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be applied on each element.
 *
 * Return: nothing
 **/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
