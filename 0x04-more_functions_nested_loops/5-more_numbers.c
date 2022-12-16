#include "main.h"
#include <ctype.h>

/**
 * print_numbers- alt function
 * Description: prints digits from 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int i = 0;

		while (i < 15)
		{
			_putchar('0' + i);
			i++;
		}
		_putchar('\n');
	}
}
