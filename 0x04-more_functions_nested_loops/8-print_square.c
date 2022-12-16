#include "main.h"
#include <ctype.h>

/**
 * print_square- alt function
 * Description: prints digits from 0 to 14 ten times
 * @s: square size
 * Return: Always 0 (Success)
 */
void print_square(int s)
{
	int x;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < s; x++)
		{
			int i = 0;

			while (i < s)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
		}
	}
}
