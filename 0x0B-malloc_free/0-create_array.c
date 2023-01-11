#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array- Write a function that creates an array of chars
 * @size: size of mem
 * @c: character to be appended to array
 *
 * Return: character array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);
	
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
