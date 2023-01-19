#include "function_pointers.h"

/**
 * int_index - uses function passed to it
 * @array: array to be searched
 * @size: size of array
 * @cmp: function that prints name
 *
 * Return: Integer (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL || array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
