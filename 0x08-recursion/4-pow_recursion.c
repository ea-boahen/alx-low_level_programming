#include "main.h"
#include <string.h>

/**
 * _pow_recursion- find power
 * @x: digit
 * @y: digit
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
