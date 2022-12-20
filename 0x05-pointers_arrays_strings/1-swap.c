#include "main.h"

/**
 * swap_int - resets value of n to 98
 * @a: pointer as parameter of function
 * @b: pointer as parameter of function
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
