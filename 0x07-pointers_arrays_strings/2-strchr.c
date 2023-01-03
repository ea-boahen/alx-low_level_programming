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
	int i, j = 0;
	int k = strlen(s);

	for (; i < k; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
			j++;
			break;
		}
	}
	return (NULL);
}
