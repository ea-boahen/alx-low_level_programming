#include "main.h"

/**
 * _sqrt_recursion- main functiion
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- _sqrt_recursion
 * @a: integer parameter
 * @b: integer param 2
 *
 * Return:sqrt
 */
int _sqrt(int a, int b)
{
	if (a < 0)
		return (-1);
	if ((b * b) > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (_sqrt(n, i + 1));
}
