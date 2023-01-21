#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - sums all variable args passed to function.
 * @separator: more like a delimiter
 * @n: number of args.
 *
 * Return: integer (SUCCESS)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
