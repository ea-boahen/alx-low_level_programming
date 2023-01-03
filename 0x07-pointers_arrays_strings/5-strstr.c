#include "main.h"
#include <string.h>

/**
 * _strstr- returns bytes of segment
 * @haystack: destination string
 * @needle: constant byte
 *
 * Return: void.
 */
char *_strstr(char *haystack, char *needle)
{
	int b = strlen(needle);
	int i = 0;

	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] && haystack[i + (b - 1)] == needle[b - 1])
			return (&haystack[i]);
	}
	return (NULL);
}
