#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes each word in a string
 * @p: destination string
 *
 * Return: void.
 */
char *cap_string(char *p)
{
	int len = strlen(p), i, j;
	char sow[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	/*iterate through string*/
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((i == 0 || p[i - 1] == sow[j]) && (p[i] >= 97 && p[i] <= 122))
			{
				p[i] -= 32;
			}
		}
	}
	return (p);
}
