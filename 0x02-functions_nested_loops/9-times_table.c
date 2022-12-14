#include <stdio.h>
#include "main.h"

/**
 * times_table - prints alphabets
 * Description: program prints alphabets
 * Return: void
 */
void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int m;

		for (m = 0; m < 10; m++)
		{
			if (((m * n) < 10) && (m > 0))
			{
				putchar(' ');
			}
			printf("%d", (m *  n));
			if (m < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
