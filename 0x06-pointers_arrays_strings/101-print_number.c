#include "main.h"
#include <ctype.h>

/**
 * print_number- alt function
 * Description: prints digits from 0 to 9
 * @n: number to be printed
 *
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
