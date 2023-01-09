#include "main.h"
#include <string.h>

/**
 * _strspn- returns bytes of segment
 * @s: destination string
 * @accept: constant byte
 *
 * Return: void.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *d = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = d;
	}
	return (c);
}
