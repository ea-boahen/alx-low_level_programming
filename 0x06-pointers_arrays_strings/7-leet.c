#include "main.h"
#include <string.h>

/**
 * leet - encodes a string
 * @p: destination string
 *
 * Return: void.
 */
char *leet(char *p)
{
	int len = strlen(p), i, j;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};


	/*iterate through string*/
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (p[i] == a[j] || p[i] - 32 == a[j])
				p[i] = b[j];
		}
	}
	return (p);
}
