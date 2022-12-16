#include "main.h"
#include <ctype.h>

/**
 * print_numbers- alt function
 * Description: prints digits from 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0', i);
		i++;
	}
	putchar('\n');
}
