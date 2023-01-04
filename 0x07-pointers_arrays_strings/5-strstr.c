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
	char *h = haystack;
	char *n = needle;

	for (; haystack[i] != '\0'; i++)
	{
		if (h[i] == n[0] && h[i + (b - 1)] == n[b - 1] && h[i + (b - 2)] == n[b - 2])
			return (&h[i]);
	}
	return (0);
}
