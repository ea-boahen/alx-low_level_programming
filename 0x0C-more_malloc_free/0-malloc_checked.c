#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- prints a string recursively
 * @b: string to be printed recursively
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit (98);

	return (i);
}
