#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by
 *	s with the constant byte b
 * @s: destination string
 * @b: constant byte
 * @n: number to fill to
 *
 * Return: void.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
