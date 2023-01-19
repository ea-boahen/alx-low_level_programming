#include "function_pointers.h"

/**
 * op_add - adds integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the mod of two integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n")
			exit(100);
	}
	return (a % b);
}
