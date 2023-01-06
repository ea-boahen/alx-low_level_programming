#include "main.h"
#include <string.h>

/**
 * is_palindrome- checks a string recursively
 * @s: string to be checked recursively
 *
 * Return: void.
 */
int is_palindrome(char *s)
{
	int slen = strlen(s);

	if (ispal(s, 0) == slen)
	{
		return (1);
	}
	return (0);
}

/**
 * ispal - check characters in string recursively
 * @s: string to be checked
 * @i: int value to check base
 *
 * Return: integer
 */

int ispal(char *s, int i)
{
	int slen = strlen(s);

	if (i == slen)
		return (0);
	if (s[i] == s[slen - 1 - i])
	{
		return (1 + ispal(s, ++i));
	}
	return (0);
}
