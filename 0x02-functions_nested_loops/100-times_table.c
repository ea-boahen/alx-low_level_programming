#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table
 * Description: program prints alphabets
 * @n: inputs number to function
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	if (n > 15)
	{
		printf("\n");
	}
	else if (n < 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			int m;

			for (m = 0; m <= n; m++)
			{
				if (((m * i) < 10) && (m > 0))
				{
					putchar(' ');
					putchar(' ');
				}
				if ((m * i) > 9 && (m * i) < 100)
					putchar(' ');
				printf("%d", (m * i));
				if (m < n)
				{
					putchar(',');
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
