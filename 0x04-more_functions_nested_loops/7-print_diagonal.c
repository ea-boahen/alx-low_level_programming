#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - alt function
 * Description: prints digits from 0 to 9
 * @n: length of line
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
