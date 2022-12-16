#include "main.h"
#include <ctype.h>

/**
 * print_number - uses putchar to print a number
 * @n: takes input to function
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
		n *= -1;
		c = n;
		_putchar('-');
	}

	c /= 10;

	if (c != 0)
	{
		print_number(c);
	}

	_putchar((unsigned int) n % 10 + '0');
}
