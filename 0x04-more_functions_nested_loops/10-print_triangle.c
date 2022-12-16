#include "main.h"
#include <ctype.h>

/**
 * print_triangle - multiplies two integers
 * @s: size of rectangle
 * Return: Always 0 (Success)
 */
void print_triangle(int s)
{
	int i;

	if (s <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= s; i++)
		{
			int j, k;

			for (j = s - i; j > 0; j--)
				putchar(' ');
			for (k = 0; k < i; k++)
				putchar('#');
			putchar('\n');
		}
	}
}
