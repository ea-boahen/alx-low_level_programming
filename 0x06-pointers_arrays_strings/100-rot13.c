#include "main.h"
#include <string.h>

/**
 * rot13 - encodes based on rot13
 * @p: input char to function
 *
 * Return: void.
 */
char *rot13(char *p)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; p++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = b[j];
				break
			}
		}
	}
	return (s);
}
