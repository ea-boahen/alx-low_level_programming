#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- prints a string recursively
 * @s: string to be printed recursively
 *
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
