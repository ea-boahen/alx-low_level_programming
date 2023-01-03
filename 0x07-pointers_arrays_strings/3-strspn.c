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
	int b = strlen(accept);
	int i, c = 0;

	for (; s[i] != ' '; i++)
	{
		int j = 0;

		for (; j < b; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
