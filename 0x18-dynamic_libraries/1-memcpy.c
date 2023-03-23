#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination string
 * @src: source to copy from
 * @n: number to fill to
 *
 * Return: void.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
