#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other string but the first
 * @str : character input to function
 *
 * Return: void.
 */
void puts2(char *str)
{
	int x = 0;

	_putchar(str[x]);
	while (str[x++])
	{
		if(x % 2 == 0 && str[x] != '\0')
			_putchar(str[x]);
	}
	_putchar('\n');
}
