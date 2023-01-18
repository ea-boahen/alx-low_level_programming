#include "main.h"
#include <string.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the characte
 * @s: destination string
 * @c: check for this character
 *
 * Return: void.
 */
char *_strchr(char *s, char c)
{
	int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
