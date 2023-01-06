#include "main.h"
#include <string.h>

/**
 * factorial- prints a factorial of a number
 * @n: digit to be printed recursively
 *
 * Return: void.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
