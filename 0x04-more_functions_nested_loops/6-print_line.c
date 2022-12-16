#include "main.h"
#include <ctype.h>

/**
 * print_line - alt function
 * Description: prints digits from 0 to 9
 * @n: length of line
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
