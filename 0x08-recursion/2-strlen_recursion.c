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
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
