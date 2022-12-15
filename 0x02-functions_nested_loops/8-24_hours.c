#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints sign
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			printf("%02d:", i);
			printf("%02d\n", j);
			j++;
		}
		i++;
	}
}
