#include "main.h"
#include <string.h>

/**
 * factorial- prints a factorial of a number
 * @n: digit to be printed recursively
 *
 * Return: void.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
