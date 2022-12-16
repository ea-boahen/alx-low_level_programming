#include "main.h"
#include <ctype.h>

/**
 * more_numbers- alt function
 * Description: prints digits from 0 to 14 ten times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int i = 0;

		while (i < 15)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
