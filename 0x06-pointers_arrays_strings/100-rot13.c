#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string to function
 *
 * Return: the resulting string
 */
char *rot13(char *c)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
	}
	return (c);
}
