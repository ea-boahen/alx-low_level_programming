#include "main.h"
#include <string.h>

/**
 * print_array - prints string in a reversed order
 * @a : array input to function
 * @n : size of array
 * Return: void.
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
