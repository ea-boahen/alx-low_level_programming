#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array- Write a function that creates an array of chars, and initia * lizes it with a specific char.
 * @size: size of mem
 * @c: character to be appended to array
 *
 * Return: character array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		retrun (NULL);

	char *a = malloc(sizeof(c) * size);
	
	*a = c;
	return a;
}
