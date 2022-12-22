#include "main.h"
#include <string.h>

/**
 * string_toupper - resets value of n to 98
 * @p: destination string
 *
 * Return: void.
 */
char *string_toupper(char *p)
{
	int a = 0;
	int b = strlen(p);

	for (; a < b; a++)
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] -= 32;
	}
	return (p);
}
