#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - checks if character is upper
 * @array: array to be iterated
 * @size: size of array
 * @action: function to work on each element of array
 *
 * Return: void (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL || array != NULL)
	{
		int i, j = size;

		for (i = 0; i < j; i++)
			action(array[i]);
	}
}
