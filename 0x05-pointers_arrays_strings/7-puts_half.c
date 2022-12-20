#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str : character input to function
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int x = 0;
	int s = strlen(str);
	int n;

	if (s % 2 == 0)
		n = strlen(str) / 2;
	else
		n = (strlen(str) - 1) / 2;

	for (x = n; x < s; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
