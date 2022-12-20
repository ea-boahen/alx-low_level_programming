#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in a reversed order
 * @s : character input to function
 * Return: void.
 */
void print_rev(char *s)
{
	int x;

	for (x = strlen(s) - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
