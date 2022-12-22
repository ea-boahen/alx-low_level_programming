#include "main.h"
#include <string.h>

/**
 * reverse_array - function reverses any array that is assigned to it
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int b;
	int tmp;

	/*loop through array*/
	for (b = n - 1; b >= n / 2; b--)
	{
		tmp = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = tmp;
	}
}
