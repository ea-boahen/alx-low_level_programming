#include "function_pointers.h"

/**
 * int_index - uses function passed to it
 * @array: array to be searched
 * @size: size of array
 * @comp: function that prints name
 *
 * Return: Integer (Success)
 */

int int_index(int *array, int size, int (*comp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (comp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (comp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
