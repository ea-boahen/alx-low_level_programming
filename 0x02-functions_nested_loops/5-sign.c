#include "main.h"
#include <ctype.h>

/**
 * print_sign - prints sign
 * @n: takes input to function
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
