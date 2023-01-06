#include "main.h"
#include <string.h>

/**
 * _puts_recursion- prints a string recursively
 * @s: string to be printed recursively
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/*check if you are not at the end of the string - base stmt*/
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
