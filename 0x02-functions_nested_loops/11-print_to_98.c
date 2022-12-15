#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints sign
 * @n: takes input to function
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
